workspace(name = "bazel_cpp_example")
load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive","http_file")

http_archive(
    name = "gtest",
    url = "https://github.com/google/googletest/archive/release-1.7.0.zip",
    sha256 = "b58cb7547a28b2c718d1e38aee18a3659c9e3ff52440297e965f5edffe34b6d0",
    strip_prefix = "googletest-release-1.7.0",
    build_file="@//third-party:gtest.BUILD"
)

http_archive(
   name = "github_nlohmann_json",
  sha256 = "6bea5877b1541d353bd77bdfbdb2696333ae5ed8f9e8cc22df657192218cad91",
   urls = [
       "https://github.com/nlohmann/json/releases/download/v3.9.1/include.zip"
   ],
   build_file = "@//third-party:nlohmann-json.BUILD",
)
## General rules
load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

## rules_docker
load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

# Download the rules_docker repository at release v0.14.4
http_archive(
    name = "io_bazel_rules_docker",
    sha256 = "4521794f0fba2e20f3bf15846ab5e01d5332e587e9ce81629c7f96c793bb7036",
    strip_prefix = "rules_docker-0.14.4",
    urls = ["https://github.com/bazelbuild/rules_docker/releases/download/v0.14.4/rules_docker-v0.14.4.tar.gz"],
)

load(
    "@io_bazel_rules_docker//toolchains/docker:toolchain.bzl",
    docker_toolchain_configure="toolchain_configure"
)

docker_toolchain_configure(
    name = "docker_config",
    docker_path = "/usr/bin/docker",
)

load("@io_bazel_rules_docker//repositories:repositories.bzl", container_repositories = "repositories",)
container_repositories()

load("@io_bazel_rules_docker//repositories:deps.bzl", container_deps = "deps")
container_deps()

load("@io_bazel_rules_docker//repositories:pip_repositories.bzl", "pip_deps")
pip_deps()

load(
    "@io_bazel_rules_docker//container:container.bzl",
    "container_pull",
)

load(
    "@io_bazel_rules_docker//cc:image.bzl",
    _cc_image_repos = "repositories",
)

# load CXX optimized docker images
_cc_image_repos()



load("@io_bazel_rules_docker//container:container.bzl", "container_pull")

container_pull(
    name = "ubuntu_with_pistache",
    registry = "index.docker.io",
    repository = "asaker/myubuntu",
    tag = "1.0",
)