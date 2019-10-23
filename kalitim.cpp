#include <iostream>
#include "person.h"
#include "student.h"

using namespace std;


int main(int argc, char** argv) {
	
	
	person kisi1("111111","ilker","aykut");
	
	cout<<kisi1.getTcNo()<<" "<<kisi1.getIsim()<<" "<<kisi1.getSoyisim()<<endl;
	
	student ogrenci1("12345","99999999999","Mustafa","Ali");
	
	cout<<ogrenci1.getOgrenciNo()<<endl;
	cout<<ogrenci1.getTcNo()<<endl;
	cout<<ogrenci1.getIsim()<<endl;
	cout<<ogrenci1.getSoyisim()<<endl;
	return 0;
}
