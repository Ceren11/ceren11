#pragma once
#include "stdafx.h"
#include "Appointment.h"
#include<string>
#include<sstream>

class OneTime :public Appointment {

public:
	

	OneTime(string description1, int month1, int day1, int yr1, int hr1, int min1):Appointment(description1,month1,day1,yr1,hr1,min1)
	{

		this->m_description1 = description1;
		this->m_hr1= hr1;
		this->m_min1= min1;
	}
	
	bool occurs_on(int month, int day, int year);
	
	void print();


	string m_description1;
	int m_hr1;
	int m_min1;
	
};

