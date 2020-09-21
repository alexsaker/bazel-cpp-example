workspace(name = "bazel_cpp_example")
load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive","http_file")


#http_archive(
#    name = "github_nlohmann_json",
#   sha256 = "6bea5877b1541d353bd77bdfbdb2696333ae5ed8f9e8cc22df657192218cad91",
#    urls = [
#        "https://github.com/nlohmann/json/releases/download/v3.9.1/include.zip"
#    ],
#    build_file = "//third-party:nlohmann_json.BUILD",
#)

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

http_archive(
    name = "io_bazel_rules_go",
    sha256 = "08c3cd71857d58af3cda759112437d9e63339ac9c6e0042add43f4d94caf632d",
    urls = [
        "https://mirror.bazel.build/github.com/bazelbuild/rules_go/releases/download/v0.24.2/rules_go-v0.24.2.tar.gz",
        "https://github.com/bazelbuild/rules_go/releases/download/v0.24.2/rules_go-v0.24.2.tar.gz",
    ],
)

http_archive(
    name = "bazel_gazelle",
    sha256 = "d4113967ab451dd4d2d767c3ca5f927fec4b30f3b2c6f8135a2033b9c05a5687",
    urls = [
        "https://mirror.bazel.build/github.com/bazelbuild/bazel-gazelle/releases/download/v0.22.0/bazel-gazelle-v0.22.0.tar.gz",
        "https://github.com/bazelbuild/bazel-gazelle/releases/download/v0.22.0/bazel-gazelle-v0.22.0.tar.gz",
    ],
)



load("@io_bazel_rules_go//go:deps.bzl", "go_register_toolchains", "go_rules_dependencies")
load("@bazel_gazelle//:deps.bzl", "gazelle_dependencies")


go_rules_dependencies()

go_register_toolchains()

gazelle_dependencies()