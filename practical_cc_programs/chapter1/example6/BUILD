cc_library(
    name = "Lib",
    srcs = ["lib.cc"],
    hdrs = ["lib.h"],
    visibility = ["//visibility:public"],
)

cc_test(
    name = "mytest",
    srcs = ["mytest.cc"],
    visibility = ["//visibility:public"],
    deps = [
        ":Lib",
        "@com_google_googletest//:gtest_main",
    ],
    size = "small",
)