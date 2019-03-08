#include "person.h"
#include <iostream>

using namespace std;

Person::Person()
{
  string firstName = " ";
  string lastName = " ";
  int    employeeID = 0;
  string companyName = " ";
  float  hoursWorked = 0.0;
  float  payRate = 0.0;
}

void Person::setFirstName(string fName)
{
  firstName = fName;
}

string Person::getFirstName()
{
  return firstName;
}

void Person::setLastName(string lName)
{
  lastName = lName;
}


string Person::getLastName()
{
  return lastName;
}

void Person::setEmployeeId(int id)
{
  if (employeeID < 0)
  {
    cout << "Employee ID must be a positive number. Terminating program." << endl;
    exit(1);
  }
  employeeID = id;
}

int Person::getEmployeeId()
{
  return employeeID;
}

void Person::setCompanyName(string coName)
{
  companyName = coName;
}

string Person::getCompanyName()
{
  return companyName;
}

void Person::setPayRate(float rate)
{
  if(payRate < 0.0)
  {
    cout<< "Pay rate must be greater than 0. Terminating program." << endl;
    exit(1);
  }
  payRate = rate;
}

float Person::getPayRate()
{
  return payRate;
}

void Person::setHoursWorked(float hours)
{
  if (hoursWorked < 0.0)
  {
    cout<< "Hours worked must be greater than 0. Terminating program." << endl;
    exit(1);
  }
  hoursWorked = hours;
}

float Person::getHoursWorked()
{
  return hoursWorked;
}

float Person::totalPay()
{
  return (hoursWorked * payRate);
}
string Person::fullName()
{
  return (firstName + " " + lastName);
}
