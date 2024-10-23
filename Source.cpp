#include "rectangleType.h"
#include <iostream>


using namespace std;



int main() 

{
	double l;
	double w;
	double area;

	
	l = 25.0;
	w = 25.0;
	area = 0.0;


	rectangleType newTrangle;
	newTrangle.setDimension(l, w);
	newTrangle.print();
	area = newTrangle.area();
	cout << "Area: " << area << endl;



	return 0;
}