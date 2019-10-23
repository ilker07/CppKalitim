#ifndef STUDENT_H
#define STUDENT_H


#include <iostream> 
#include "person.h"

using namespace std;






class student:public person {
	
  
    private:
    	string ogrenciNo;
    	
	public:	
	    
	    
	    student(string="00000000000",string="00000000000",string="Isimsiz",string="Soyisimsiz");
	    string getOgrenciNo();
	    void setOgrenciNo(string);
	    
	    
	    


	
	
	
};



#endif 
