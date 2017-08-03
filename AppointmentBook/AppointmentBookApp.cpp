#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include<iterator>
#include "Appointment.h"
#include "OneTime.h"
#include "Daily.h"
#include "Monthly.h"
#include "Yearly.h"
#include "AppointmentBookApp.h"
#include "Date.h"
using namespace std;
int m, d, y, hr, mn;
int choice;
string description;
string date;


void checkAppointments(vector<Appointment*>& apptbook) {


	cout << "Enter a Date:In the Form:mm dd yy";
	cin >> m >> d >> y;
    cout << "Appoinments on:" << m << "/" << d << "/" << y << endl;
	for (int k = 0; k < apptbook.size(); k++)
	{
		if ((m == (apptbook[k]->getDate()).getMonth()) && d == (apptbook[k]->getDate()).getDay() & y == (apptbook[k]->getDate()).getYear())
			
		        apptbook[k]->print();
		        
			}
		
	}



void addAppointment(vector<Appointment*>& apptbook) {

	cout << "Enter a Date and Time :In the Form : mm dd yyyy hr min" << endl;
	cin>>m>>d>> y>>hr>> mn;
	
	
	cout << "Enter a Description:" << endl;
	cin >> description;
	
	
	cout << "Enter <1> for OneTime <2> for Daily <3> for Monthly <4> for Yearly:" ;
	cin >> choice;
	
		if (choice == 1)
		{
			Appointment* newOneTime = new OneTime(description, m, d, y, hr, mn);
			apptbook.push_back(newOneTime);

		}

		else if (choice == 2)
		{
			Appointment* newDaily = new Daily(description, m, d, y, hr, mn);
			apptbook.push_back(newDaily);

		}

		else if (choice == 3)
		{
			Appointment* newMonthly = new Monthly(description, m, d, y, hr, mn);
			apptbook.push_back(newMonthly);

		}
		else if (choice == 4)
		{
			Appointment* newYearly = new Yearly(description, m, d, y, hr, mn);
			apptbook.push_back(newYearly);
		}
		
	
}


int main() {

	vector<Appointment*> apptbook;

	char option;

	do {
		cout << "********** Appointment Book Application ************" << endl << endl;
		cout << "(a) See all appointments on a given day." << endl;
		cout << "(b) Add an appointment." << endl << endl;
		cout << "Enter an option or 'q' to quit: ";

		cin >> option;
		switch (option) {
		case 'a':
			checkAppointments(apptbook);
			break;
		case 'b':
			addAppointment(apptbook);
			break;
		case 'q':
			break;
		default:
			cout << "You entered an invalid option.  Try again!";
		}
		cout << endl;
	} while (option != 'q');

	// Cleaning up 

	for (int i = 0; i < apptbook.size(); i++) {
		delete apptbook[i];
	}
	apptbook.clear();

	system("PAUSE");
	return 0;
}