#include <iostream>
#include "clockType.h"

using namespace std;



int main()

{
	int hr;
	int min;
	int sec;

	hr = 0;
	min = 0;
	sec = 0;

	clockType myClock;
	myClock.getTime(hr, min, sec);
	myClock.setTime(hr, min, sec);
	myClock.printTime();
	myClock.incHr(hr);
	myClock.printTime();



}