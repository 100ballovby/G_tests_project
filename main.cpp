#include <iostream>
#include "gtest/gtest.h"
#include "simplemath.h"
#include "simplemath.cpp"
using namespace std;

TEST (testMath, myFuncTest) {
    EXPECT_EQ(1728, cubic(12));
}

TEST (testMath, myFuncTest2) {
    EXPECT_EQ(8, cubic(2));
}

TEST (testMath, myFuncTest3) {
    EXPECT_EQ(16, cubic(2));
}

TEST (testMath, myBoolTest) {
    EXPECT_TRUE(is_even(2));
}

TEST (testMath, myBoolTest2) {
    EXPECT_FALSE(is_even(2));
}

TEST (testMath, myBoolTest3) {
    EXPECT_TRUE(is_even(35 + 7 / 3));
}



TEST (testMath, arrayTest) {
    const int len = 6;
    int arr[len] = {4, 8, 9, -2, 11, 6};
    EXPECT_EQ(4, min_el(arr, len));
}

