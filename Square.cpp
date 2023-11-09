//
//  Square.cpp
//  Square Sides
//
//  Created by Emanuel Alfaro on 11/9/23.
//

#include "Square.hpp"
#include <iostream>

int getSquareSides()
{
    return 4;
}

int getPerimeter(int x)
{
    std::cout << "A square has " << getSquareSides() << " sides." << '\n';
    std::cout << " A square with a length of " << x << " has a perimeter of: ";
    int y{x * getSquareSides()};
    std::cout << y << '\n';
    return y;
}
