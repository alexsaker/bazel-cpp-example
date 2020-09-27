load("@rules_cc//cc:defs.bzl", "cc_library")

cc_library(
    name = "time-utils",
    srcs = ["timestamp.cc","timestamp.h"],
    visibility = ["//apps/app1:__pkg__"],
)

cc_library(
    name="hello",
    srcs=["hello.cc","hello.h"],
    visibility=["//apps/app1:__pkg__","//libs/utils:__pkg__"]
)

cc_test(
    name = "hello-test",
    srcs = ["hello-test.cc"],
    copts = ["-Iexternal/gtest/include"],
    deps = [
        "@gtest//:main",
        "//libs/utils:hello",
    ],
)
