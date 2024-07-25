#include <gtest/gtest.h>
#include "../src/functions.h"

TEST(AddTest, PositiveNumbers) {
    EXPECT_EQ(add(1, 2), 3);
    EXPECT_EQ(add(5, 3), 8);
}

TEST(SubtractTest, PositiveNumbers) {
    EXPECT_EQ(subtract(5, 3), 2);
    EXPECT_EQ(subtract(10, 4), 7);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
