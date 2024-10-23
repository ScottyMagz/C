#include "rectangleType.h"
#include <iostream>

using namespace std;

void rectangleType::setDimension(double l, double w)
{
    length = l;  // Correct assignment to the class member 'length'
    width = w;   // Correct assignment to the class member 'width'
}

double rectangleType::getLength() const
{
    return length;
}

double rectangleType::getWidth() const
{
    return width;
}

double rectangleType::area() const
{
    return length * width;
}

double rectangleType::perimeter() const
{
    return 2 * (length + width);  // Perimeter is 2 * (length + width), not length * width
}

void rectangleType::print() const
{
    cout << "Length = " << length << ", Width = " << width << endl;
}

rectangleType::rectangleType()
{
    length = 0;
    width = 0;
}

rectangleType::rectangleType(double l, double w)
{
    length = l;  // Correct assignment to the class member 'length'
    width = w;   // Correct assignment to the class member 'width'
}
