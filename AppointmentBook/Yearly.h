#pragma once
#include "stdafx.h"
#include "Appointment.h"

class Yearly :public Appointment {

public:
	bool occurs_on(int month, int day, int year);
	void print();
	Yearly(string description4, int month4, int day4, int yr4, int hr4, int min4) :Appointment(description4, month4, day4, yr4, hr4, min4)
	{

		this->m_description = description4;
		this->m_hr= hr4;
		this->m_min = min4;
	}
	string m_description4;
	int m_hr4;
	int m_min4;
};

