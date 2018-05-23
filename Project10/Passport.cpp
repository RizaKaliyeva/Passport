#include "Passport.h"


istream & operator >> (istream & is, Passport & passport)
{
	is >> passport.Passport_NO >> passport.name >> passport.sname >> passport.birth_date;
	return is;
}

ostream & operator << (ostream & os, Passport & passport)
{
	os << setw(14) << passport.Passport_NO << setw(15) << passport.name << setw(20) << passport.sname << setw(10) << passport.birth_date << endl;
	return os;
}

Passport::Passport(string Passport_NO, string name, string sname, Date birth_date)
{
	this->Passport_NO = Passport_NO;
	this->name = name;
	this->sname = sname;
	this->birth_date = birth_date;
}
