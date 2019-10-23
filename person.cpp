#include "person.h"
#include "student.h"
#include <iostream> 

person::person(string tcNo,string isim,string soyisim)
{
	this->tcNo=tcNo;
	this->isim=isim;
	this->soyisim=soyisim;
	
}

string person::getIsim()
{
	return this->isim;
}
string person::getSoyisim()
{
	return this->soyisim;
}

string person::getTcNo()
{
	return this->tcNo;
}

void person::setIsim(string isim)
{
	this->isim=isim;
}
void person::setSoyisim(string soyisim)
{
	this->soyisim=soyisim;
}
void person::setTcNo(string tcNo)
{
	this->tcNo=tcNo;
}
