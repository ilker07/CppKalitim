#include "student.h"
#include "person.h"
#include <iostream> 


student::student(string ogrenciNo,string tcNo,string isim,string soyisim):ogrenciNo(ogrenciNo),person(tcNo,isim,soyisim)
{
   	
	
	
}

string student::getOgrenciNo()
{
	return this->ogrenciNo;
}

void student::setOgrenciNo(string ogrenciNo)
{
	this->ogrenciNo=ogrenciNo;
}
