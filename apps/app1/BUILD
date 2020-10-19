load("@rules_cc//cc:defs.bzl","cc_binary")
load("@io_bazel_rules_docker//contrib:test.bzl", "container_test")


# https://docs.bazel.build/versions/master/be/c-cpp.html#cc_library
#cc_library(
#    name = "crow",
#    hdrs = ["@crow//file"],
#    srcs=glob(["*.h"]),
#    visibility = ["//visibility:public"],
#    strip_include_prefix = "/external/crow/file",
#    include_prefix = "crow",
#    linkstatic = True,   # otherwise main() will could end up in a .so
#    deps=["@boost//:asio_ssl","@openssl//:ssl"],
#    linkopts = ["-lpthread","-lboost"],
#
#)
cc_binary(
    name = "server",
    srcs = ["server.cc","server.h"],
    deps = [
        "//libs/utils:time-utils",
       "@github_nlohmann_json//:json",
   #":crow",
    ],
    linkopts = ["-pthread","-lpistache","-lssl" ,"-lcrypto"],
)


load("@io_bazel_rules_docker//container:container.bzl", "container_image","container_push")
container_image(
    name = "v1",
    repository = "asaker",
    base = "@ubuntu_with_pistache//image",
    files = [":server"],
    entrypoint = ["./server"],
    ports= ["9080"],
    user = "bazel",
    volumes=["/data"],
    workdir="/app",
    env={ "foo": "baz" },
    stamp = True
)

container_push(
   name = "app1-v1",
   image = ":v1",
   format = "Docker",
   registry = "index.docker.io",
   repository = "asaker/bazel-app1",
  # tag = "v1",
  tag = "{BUILD_EMBED_LABEL}"
)


container_test(
    name = "app1-test",
    configs = ["server-container-test.json"],
    image = ":v1",
)