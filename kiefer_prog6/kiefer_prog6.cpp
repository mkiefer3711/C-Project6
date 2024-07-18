// Author: Maddison Kiefer
// 
// Program to Calculate Costs of Shipping and Painting a Cylindrical Container
// This program will take inputs for the radius, height, shipping cost per liter, and the paint cost per square foot
// and will output the total shipping cost and the total paint cost of the container.

// Header files
#include <iostream>
#include <iomanip>
#include "cylinderType.h"

// Main function
int main()
{
    // Defining the variables
    double radius;
    double height;
    double shippingCostPerLiter;
    double paintCostPerSquareFoot;
    double shippingCost;
    double paintCost;
    double volume;
    double area;

    cout << fixed << showpoint << setprecision(2);

    // Recieving and storing all of the inputs
    cout << "Input the radius of the base (in feet) of the container: ";
    cin >> radius;
    cout << "Input the height (in feet) of the container: ";
    cin >> height;
    cout << "Input the shipping cost per liter: ";
    cin >> shippingCostPerLiter;
    cout << "Input the paint cost per square foot: ";
    cin >> paintCostPerSquareFoot;

    // Calls the class for the input radius and height
    cylinderType cylinder(radius, height);
    
    // Uses the getVolume function in the class to calculate the total shipping cost
    volume = cylinder.getVolume() * 28.32;
    shippingCost = volume * shippingCostPerLiter;

    // Uses the getArea function in the class to calculate the total paint cost
    area = cylinder.getArea();
    paintCost = area * paintCostPerSquareFoot;

    // Prints the total shipping cost and the total paint cost
    cout << "The total shipping cost is " << shippingCost << endl;
    cout << "The total paint cost is " << paintCost << endl;
 
}

