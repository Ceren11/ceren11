#pragma once
#include "stdafx.h"
#include "Appointment.h"


class Monthly :public Appointment {


public:
	int month, day, year;
	bool occurs_on(int month, int day, int year);
	void print();
	Monthly(string description3, int month3, int day3, int yr3, int hr3, int min3) :Appointment(description3, month3, day3, yr3, hr3, min3)
	{

		this->m_description3 = description3;
		this->m_hr3= hr3;
		this->m_min3 = min3;
	}
	string m_description3;
	int m_hr3;
	int m_min3;
	
};

