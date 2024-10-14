#include <iostream>
#include "clockType.h"

using namespace std;

void clockType::setTime(int h, int m, int s)

{
	hr = h;
	min = m;
	sec = s;

}


void clockType::printTime() const

{
	cout << "hr = " << hr << endl;
	cout << "min = " << min << endl;
	cout << "sec = " << sec << endl;
	cout << endl;

}

void clockType::getTime(int& hr, int& min, int& sec)

{
	cout << "Whats the Hour ?" << endl;
	cin >> hr;
	cout << "Whats the Minutes ?" << endl;
	cin >> min;
	cout << "Whats the Seconds ? " << endl;
	cin >> sec;
}

void clockType::incHr(int& hr)

{

	hr = hr + 1;
	cout << "hr =" << hr << endl;
}