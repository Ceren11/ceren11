#pragma once
#include"Date.h"
#include<iostream>
#include <sstream>
#include <string>

using namespace std;


class Appointment {

public:
	
	
	
	string convertInt(int number) const;
	
	void print();
	
	 {

		 this->m_description = description;
		 this->m_hr = hr;
		 this->m_min = min;
      }


protected:

	string m_description;
    int m_hr;
	int m_min;
	Date m_date;
	

	

	
	

  
	
	
	

	

	

};