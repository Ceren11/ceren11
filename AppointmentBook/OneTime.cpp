#include "stdafx.h"
#include "Appointment.h"
#include "Onetime.h"
#include"Date.h"
#include<string>
#include<iostream>

using namespace std;


bool OneTime:: occurs_on(int month, int day, int year) {
	if (month ==m_date.getMonth() && day == m_date.getDay())
	{
		if(year==m_date.getYear())
			return true;
	}
	return false;
		

}

void OneTime::print()
{
	cout << m_hr1 << ":" << m_min1 << ":" << "->" << m_description1 << "<OneTime>";
}
