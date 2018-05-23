#include "Date.h"

istream & operator >> (istream & is, Date d)
{
	char c;
	is >> d.day >> c >> d.month >> c >> d.year;
	return is;
}

ostream & operator << (ostream & os, Date d)
{
	os << d.day << "/" << d.month << "/" << d.year;
	return os;
}
