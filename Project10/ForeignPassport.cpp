#include "ForeignPassport.h"

ForeignPassport::ForeignPassport(string FP_N, string name, string sname, Date birth_date)
{
	this->ForeignPassport_NO = FP_N;
	this->name = name;
	this->sname = sname;
	this->birth_date = birth_date;
}

void ForeignPassport::addVisa(Visa v)
{
	this->Visas.push_back(v);
}

istream & operator >> (istream & is, ForeignPassport & fp)
{
	int count;
	Visa v;
	is >> fp.ForeignPassport_NO >> fp.name >> fp.sname >> fp.birth_date;
	is >> count;
	for (int i = 0; i < count; i++)
	{
		is >> v;

	}
	return is;
}

ostream & operator<<(ostream & os, ForeignPassport & fp)
{
	os << setw(12) << fp.ForeignPassport_NO << setw(15) << fp.name << setw(20) << fp.sname << setw(12) << fp.birth_date << endl;
	list<Visa>::iterator iter;
	for (iter = fp.Visas.begin();iter != fp.Visas.end(); iter++)
		os << *iter << endl;
	return os;
}
