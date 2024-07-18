// Author: Maddison Kiefer
//
// This class was created to help find the volume and area of a cylinder when you are 
// provided with a height and radius.

// Header files
#pragma once
#include <iostream>
#include <iomanip>
#ifndef CYLINDERTYPE_H
#define CYLINDERTYPE_H
using namespace std;

// Creating the class
class cylinderType
{

// Creating the functions within public
public:
    cylinderType(double r, double h);
    void setRadius(double r);
    double getRadius();
    void setHeight(double h);
    double getHeight();
    double getArea();
    double getVolume();

// Creating the variables in private
private:
    double radius;
    double height;
};

// Constructor function for the class
cylinderType::cylinderType(double r = 0, double h = 0)
{
    setRadius(r);
    setHeight(h);
}

// Function to set the radius for the cylinder
void cylinderType::setRadius(double r)
{
    if (r >= 0)
        radius = r;
    else
        radius = 0;
}

// Function to return the radius of the cylinder
double cylinderType::getRadius()
{
    return radius;
}

// Function to set the height of the cylinder
void cylinderType::setHeight(double h)
{
    if (h >= 0)
        height = h;
    else
        height = 0;
}

// Function to return the height of the cylinder
double cylinderType::getHeight()
{
    return height;
}

// Function that calculates the area of the cylinder
double cylinderType::getArea()
{
    double area = (2 * 3.14 * radius * height) + (2 * 3.14 * (radius * radius));
    return area;
}

// Function that calculates the volume of the cylinder
double cylinderType::getVolume()
{
    double volume = (3.14 * (radius * radius) * height);
    return volume;
}

#endif