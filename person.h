#ifndef PERSON_H
#define PERSON_H


#include <iostream> 

using namespace std;






class person{
	
  
    private:
    	string tcNo;
    	string isim;
    	string soyisim;
	public:	
	    
	    
	    person(string="00000000000",string="Isimsiz",string="Soyisimsiz");
	    string getIsim();
	    string getSoyisim();
	    string getTcNo();
	    
	    void setIsim(string isim);
	    void setSoyisim(string soyisim);
	    void setTcNo(string tcNo);
	    
	    


	
	
	
};



#endif 
