#include "stdafx.h"
#include "Appointment.h"
#include "Yearly.h"
#include<string>

using namespace std;



bool Yearly::occurs_on(int month, int day, int year) {
	if (month == m_date.getMonth() && day == m_date.getDay())
	{
			return true;
	}
	return false;


}
void Yearly::print()
{
	cout << m_hr4<< ":" << m_min4<< ":" << "->"<<m_description4<< "<Yearly>";
}


