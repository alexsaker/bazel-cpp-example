#include "gtest/gtest.h"
#include "libs/utils/hello.h"

TEST(HelloTest, GetGreet) {
    const std::string bazel = "Bazel";
  EXPECT_EQ(sayHello(bazel), "Hello Bazel!");
}
