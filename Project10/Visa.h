#pragma once
#include"Library.h"
#include "Date.h"
class Visa {
	string Country;
	Date entry_date;
	Date exit_date;
public:
	Visa():Country(""),entry_date(),exit_date(){}
	friend istream& operator >> (istream& is, Visa& v);
	friend ostream& operator << (ostream& os, Visa v);
};