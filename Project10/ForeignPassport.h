#pragma once
#include"Library.h"
#include "Passport.h"
#include <List>
#include "Visa.h"
class ForeignPassport :public Passport {
private:
	string ForeignPassport_NO;
	list<Visa> Visas;


public:
	ForeignPassport() {
		ForeignPassport_NO="";
		this->name = "";
		this->sname = "";
		this->birth_date = birth_date;
	}
	ForeignPassport(string FP_N, string name, string sname, Date birth_date);
	void addVisa(Visa v);

	friend istream& operator >> (istream& is, ForeignPassport& fp);
	friend ostream& operator << (ostream& os, ForeignPassport& fp);
};
