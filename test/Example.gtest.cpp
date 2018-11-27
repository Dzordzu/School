//
// Created by dzordzu on 17.11.18.
//

#include <gtest/gtest.h>

namespace {

    TEST(SquareRootTest, PositiveNos) {
        EXPECT_EQ (18.0, 18.0);
        EXPECT_EQ (13.0, 13.0);
        EXPECT_EQ (18.3, 18.3);
    }

    TEST(SquareRootTest, ZeroAndNegativeNos) {
        ASSERT_EQ (0.0, 0.1);
        ASSERT_EQ (-1, -22.0);
    }
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}