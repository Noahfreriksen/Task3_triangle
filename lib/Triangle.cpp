#include "Triangle.h"
#include <string>

/*
 * Class that creates a triangle. It has a method .type() to check what kind of triangle it is. It can
 * detect: equilateral, isosceles and scalene.
 */

using namespace std;

Triangle::Triangle(int s1, int s2, int s3) {
    this->a = s1;
    this->b = s2;
    this->c = s3;
}

string Triangle::type() {
    //equilateral triangle
    if (a==b & b==c & a==c){
        return "this is a equilateral triangle";
    }

        //isosceles triangle
    else if (a == b | b == c | a == c){
        return "this is a isosceles triangle";
    }

        //scalene triangle
    else if (a!=b & b!=c & a!=c){
        return "this is a scalene triangle";
    }

    else {
        return "unknown triangle";
    }
}
