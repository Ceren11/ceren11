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
		virtual  bool occurs_on(int month, int day, int year) = 0;	 Date getDate();	 Appointment(string description, int month, int day, int yr, int hr, int min) :m_date(month, day, yr)
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