#pragma once
#include"Library.h"
class Date {
	unsigned int day;
	unsigned int month;
	unsigned int year;

public:
	Date() = default;
	Date(int d,int m,int y):month(m),day(d),year(y){}

	friend istream& operator >> (istream& is, Date d);
	friend ostream& operator << (ostream& os, Date d);
};
