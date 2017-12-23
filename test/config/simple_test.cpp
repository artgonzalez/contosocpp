#include "gtest/gtest.h"

TEST(basic_tests, test_eq) {
    EXPECT_EQ(3, 3);
}

TEST(basic_tests, test_neq) {
    EXPECT_NE(1, 2);
}