load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")

cc_library(
    name = "library1",
    srcs = ["library1.cc"],
    hdrs = ["library1.h"],
)


cc_binary(
    name = "example2",
    srcs = ["main.cc"],
    deps = [
        ":library1",
    ],
)