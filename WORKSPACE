workspace(name = "bazel_cpp_example")
load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive","http_file")

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

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

# load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository")

# git_repository(
#     name = "com_github_nelhage_rules_boost",
#     commit = "1e3a69bf2d5cd10c34b74f066054cd335d033d71",
#     remote = "https://github.com/nelhage/rules_boost",
#     shallow_since = "1591047380 -0700",
# )

# load("@com_github_nelhage_rules_boost//:boost/boost.bzl", "boost_deps")
# boost_deps()
# http_file(
#     name = "crow",
#     downloaded_file_path = "crow_all.h",
#     sha256="52be1441573aafad85ba2414a77c51c66640890a128829d181db8a0c48b9620e",
#     urls=["https://github.com/ipkn/crow/releases/download/v0.1/crow_all.h"],
# )

