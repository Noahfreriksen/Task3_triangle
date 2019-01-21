#include <iostream>
#include "lib/Triangle.h"

/*
 * Noah Freriksen
 * ETI2A
 * Program that creates a triangle of user input and gives the triangle type.
 */

using namespace std;

int main() {

    int s1, s2, s3;

    cout << "give side 1: ";
    cin >> s1;
    cout << "give side 2:  ";
    cin >> s2;
    cout << "give side 3: ";
    cin >> s3;

    Triangle driehoek(s1, s2, s3);
    cout << driehoek.type();

    return 0;
}