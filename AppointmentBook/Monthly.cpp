#include "stdafx.h"
#include "Appointment.h"
#include "Monthly.h"
#include"Date.h"
#include<string>

using namespace std;

void Monthly::print()
{
	cout << m_hr3 << ":" << m_min3 << ":" << "->" << m_description3 << endl;


}

bool Monthly::occurs_on(int month, int day, int year) {
	if (day == m_date.getDay() && year == m_date.getYear())
	{

			return true;
	}
	return false;


}
