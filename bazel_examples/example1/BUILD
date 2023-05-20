





#This line is loading the C++ binary rule definition from the "rules_cc" Bazel extension. The "cc_binary" function is now available to define C++ binary targets in your BUILD file.
load("@rules_cc//cc:defs.bzl", "cc_binary")


#cc_binary(...): This is a rule that tells Bazel how to build a C++ binary. The parameters of cc_binary specify the details of the build process:
cc_binary(
    #name = "bazel_first_build": This is the name of the target that will be created. This is how you would refer to this target when using it elsewhere in Bazel (e.g., as a dependency of another target, or when building from the command line with bazel build //:bazel_first_build).
    name = "example1",

    #srcs = ["main.cc"]: This specifies the source files that are used to build the binary. In this case, it's a single C++ source file named main.cc
    srcs = ["main.cc"],
)