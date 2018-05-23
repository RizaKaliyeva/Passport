#include "Visa.h"

istream & operator >> (istream & is, Visa & v)
{
	is >> v.Country >> v.entry_date >> v.exit_date;
	return is;
}

ostream & operator<<(ostream & os, Visa v)
{
	os << setw(15) << v.Country << setw(12) << v.entry_date << setw(12) << v.exit_date << endl;
	return os;
}
