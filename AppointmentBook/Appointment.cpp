#include"Appointment.h"
#include"Date.h"
#include<iostream>
#include<string>
#include<vector>
#include<sstream>



using namespace std;


string Appointment::convertInt(int number) const
{
	stringstream ss;
	ss << number;
	return ss.str();
}


bool Appointment::occurs_on(int month, int day, int year)
{
	
	
	return false;
}


void Appointment::print() {

	cout << m_hr << ":" << m_min << " -> " << m_description << endl;
}

	 

Date Appointment::getDate()
{
	return m_date;
}










  


