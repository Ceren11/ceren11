#pragma once
#include "stdafx.h"
#include "Appointment.h"

class Daily:public Appointment {

public:
	Daily(string description2, int month2, int day2, int yr2, int hr2, int min2) :Appointment(description2, month2, day2, yr2, hr2, min2)
	{

		this->m_description = description2;
		

		this->m_hr = hr2;
		this->m_min = min2;
		
	}
	bool occurs_on(int month, int day, int year);
	void print ();
	string m_description2;
	int m_hr2;
	int m_min2;
	

	
};