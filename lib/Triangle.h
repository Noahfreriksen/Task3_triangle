#ifndef TRIANGLE_TRIANGLE_H
#define TRIANGLE_TRIANGLE_H
#include <string>

/*
 * Class that creates a triangle. It has a method .type() to check what kind of triangle it is. It can
 * detect: equilateral, isosceles and scalene.
 */

using namespace std;

class Triangle {
private:
    int a;
    int b;
    int c;

public:
    Triangle(int, int, int);
    string type();
};


#endif //TRIANGLE_TRIANGLE_H
