/*
 * Class that tests the 3 outcomes of the Triangle.type method
 */

#include <gtest/gtest.h>
#include <iostream>
#include "../lib/Triangle.h"
#include "../lib/Triangle.cpp"

using namespace std;

TEST(triangle_tests, equilateral){
    Triangle driehoek(4, 4, 4);
    ASSERT_EQ(driehoek.type(), "this is a equilateral triangle");
}

TEST(triangle_tests, isosceles){
    Triangle driehoek(4, 4, 1);
    ASSERT_EQ(driehoek.type(), "this is a isosceles triangle");
}

TEST(triangle_tests, scalene){
    Triangle driehoek(1, 2, 3);
    ASSERT_EQ(driehoek.type(), "this is a scalene triangle");
}

