//
// Created by dzordzu on 27.11.18.
//

#include <gtest/gtest.h>
#include <Fitness.h>

class FitnessNonOverloadedExample : public Fitness {};

namespace {

    TEST(FitnessTest, NonOverloaded) {
        FitnessNonOverloadedExample f1, f2;
        EXPECT_THROW(f1 == f2, FitnessException);
    }
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
