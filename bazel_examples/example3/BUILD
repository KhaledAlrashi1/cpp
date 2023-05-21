load("@rules_cc//cc:defs.bzl", "cc_binary")

cc_binary(
    name = "example3",
    srcs = ["main.cc"],
    deps = [
        "//bazel_examples/example3/library1:library1",
        "//bazel_examples/example3/library2:library2",
    ],
)