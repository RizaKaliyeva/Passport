#pragma once
#include "Library.h"
#include "Date.h"
class Passport {
private:
	string Passport_NO;
protected:
	string name;
	string sname;
	Date birth_date;
public:
	Passport():Passport_NO("00"),name(""),sname(""),birth_date(){}
	Passport(string Passport_NO, string name, string sname, Date birth_date);
	friend istream& operator >> (istream& is, Passport& passport);
	friend ostream& operator << (ostream& os, Passport& passport);
};