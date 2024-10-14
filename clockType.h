#pragma once
class clockType
{
	// Members at Top 
	// Members are Private 
private:
	int hr;
	int min;
	int sec;
	

	//Methods are Public
public:

	//pre: send hour, min, sec , value 
	//post: set the hour, minutes , seconds
	void setTime(int, int, int);
	//pre:
	//post: displays the hour, minute , seconds in console
	void printTime()const;

	void getTime(int&, int&, int&);

	void incHr(int&);

};

