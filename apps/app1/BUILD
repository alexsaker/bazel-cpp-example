load("@rules_cc//cc:defs.bzl","cc_binary")

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
    #    "@github_nlohmann_json//:json",
   #":crow",
    ],
    linkopts = ["-pthread","-lpistache","-lssl" ,"-lcrypto"],
)