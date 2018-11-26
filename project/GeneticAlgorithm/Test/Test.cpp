//
// Created by dzordzu on 27.11.18.
//

#include <gtest/gtest.h>
#include <Fitness.h>

class FitnessNonOverloaded : public Fitness {};

class FitnessOverloaded : public Fitness {
    int value;
public:
    explicit FitnessOverloaded(int value) {this->value = value; }
    bool operator==(const FitnessOverloaded &f) { return this->value == f.value; }
    bool operator>(const FitnessOverloaded &f) { return this->value > f.value; }
    bool operator<(const FitnessOverloaded &f) { return this->value < f.value; }
    bool operator>=(const FitnessOverloaded &f) { return *this>f || *this == f; }
    bool operator<=(const FitnessOverloaded &f) { return *this<f || *this == f; }
};

namespace {

    TEST(FitnessTest, NonOverloaded) {
        FitnessNonOverloaded f1, f2;
//        EXPECT_THROW(f1 == f2, FitnessException);
//        EXPECT_THROW(f1 <= f2, FitnessException);
//        EXPECT_THROW(f1 >= f2, FitnessException);
//        EXPECT_THROW(f1 < f2, FitnessException);
//        EXPECT_THROW(f1 > f2, FitnessException);
    }

    TEST(FitnessTest, Overloaded) {
        FitnessOverloaded f1(1), f2(2), f3(1);
        EXPECT_TRUE(f1 == f3);
        EXPECT_TRUE(f2 > f3);
        EXPECT_TRUE(f3 < f2);
        EXPECT_TRUE(f1 <= f2);
        EXPECT_TRUE(f1 >= f3);
    }
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
