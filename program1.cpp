/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Luis Hernandez
 */

#include "std_lib_facilities.h"
using namespace std;

//function to calculate the area of a circle
double circleArea(const double pi, double radius) {
    return pi * (radius * radius);
}

int main() {
    const double pi = 3.14;
    double radius;
    cout << "Please enter the radius of the circle you want to calculate the area of: \n";
    cin >> radius;
    double area = circleArea(pi, radius);
    //print the results
    cout << "The area of the circle is " << area;
    //end main
    return 0;
}