//Brian Chairez
//CPSC 301 Section 2

#include "person.cpp"
#include <iostream>
#include <iomanip>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

void readData(vector<Person> &e);
void getCompanies(vector<Person> &e, vector<string> &c);
void printHighestPaid(vector<Person> &e);
void separateAndSave(vector<Person> &e, vector<string> &c);

int main()
{
  vector<Person> employees;
  vector<string> companyNames;

  readData(employees);
  getCompanies(employees, companyNames);
  printHighestPaid(employees);
  separateAndSave(employees, companyNames);

  return 0;
}

void readData(vector<Person> &e)
{
  string fname, lname, compname;
  int empID;
  float hrworked, payrate;
  Person myobj;

  ifstream infile;
  infile.open("input.txt");

  if(!infile)
  {
    cout<<"Could not open file. Terminating program." << endl;
    exit(1);
  }

  while(!infile.eof())
  {
    infile >> fname >> lname >> empID
           >> compname >> hrworked >> payrate;
    infile >> ws;

    myobj.setFirstName(fname);
    myobj.setLastName(lname);
    myobj.setEmployeeId(empID);
    myobj.setCompanyName(compname);
    myobj.setHoursWorked(hrworked);
    myobj.setPayRate(payrate);

    e.push_back(myobj);
  }
}

void getCompanies(vector<Person> &e, vector<string> &c)
{
  for (int i = 0; i < e.size(); i++)
  {
    string temp = e.at(i).getCompanyName();
    c.push_back(temp);
  }
}

void printHighestPaid(vector<Person> &e)
{
  float max = 0.0;
  int place;

  for (int i = 0; i < e.size(); i++)
  {
    if (e.at(i).totalPay() > max)
    {
      max = e.at(i).totalPay();
      place = i;
    }
  }

  cout << "Highest Paid: " << e.at(place).fullName() << endl;
  cout << "Employer ID: " << e.at(place).getEmployeeId() << endl;
  cout << "Employer: " << e.at(place).getCompanyName() << endl;
  cout << "Total Pay: $" << fixed << setprecision(2) << e.at(place).totalPay() << endl;
}

void separateAndSave(vector<Person> &e, vector<string> &c)
{
  float total = 0.0;
  ofstream outfile;

  outfile.open("Intel.txt");
  outfile << "Intel.txt" << endl;
  outfile << "-------------------------------------" << endl;
  for (int i = 0; i< c.size(); i++)
  {
    if (c.at(i) == "Intel")
    {
      outfile << setw(19) << left << e.at(i).fullName();
      outfile << setw(4) << left << e.at(i).getEmployeeId();
      outfile << setw(15) << left << e.at(i).getCompanyName();
      outfile << fixed << setprecision(2) << "$" << e.at(i).totalPay();
      outfile << endl;
      total += e.at(i).totalPay();
    }
  }
  outfile <<"Total: $"<<total;
  outfile.close();

  total = 0.0;
  outfile.open("Boeing.txt");
  outfile << "Boeing.txt" << endl;
  outfile << "-------------------------------------" << endl;
  for (int i = 0; i< c.size(); i++)
  {
    if (c.at(i) == "Boeing")
    {
      outfile << setw(19) << left << e.at(i).fullName();
      outfile << setw(4) << left << e.at(i).getEmployeeId();
      outfile << setw(15) << left << e.at(i).getCompanyName();
      outfile << fixed << setprecision(2) << "$" << e.at(i).totalPay();
      outfile << endl;
      total += e.at(i).totalPay();
    }
  }
  outfile <<"Total: $"<<total;
  outfile.close();

  total = 0.0;
  outfile.open("Douglas.txt");
  outfile << "Douglas.txt" << endl;
  outfile << "-------------------------------------" << endl;
  for (int i = 0; i< c.size(); i++)
  {
    if (c.at(i) == "Douglas")
    {
      outfile << setw(19) << left << e.at(i).fullName();
      outfile << setw(4) << left << e.at(i).getEmployeeId();
      outfile << setw(15) << left << e.at(i).getCompanyName();
      outfile << fixed << setprecision(2) << "$" << e.at(i).totalPay();
      outfile << endl;
      total += e.at(i).totalPay();
    }
  }
  outfile <<"Total: $"<<total;
  outfile.close();

  total = 0.0;
  outfile.open("Raytheon.txt");
  outfile << "Raytheon.txt" << endl;
  outfile << "-------------------------------------" << endl;
  for (int i = 0; i< c.size(); i++)
  {
    if (c.at(i) == "Raytheon")
    {
      outfile << setw(19) << left << e.at(i).fullName();
      outfile << setw(4) << left << e.at(i).getEmployeeId();
      outfile << setw(15) << left << e.at(i).getCompanyName();
      outfile << fixed << setprecision(2) << "$" << e.at(i).totalPay();
      outfile << endl;
      total += e.at(i).totalPay();
    }
  }
  outfile <<"Total: $"<<total;
  outfile.close();

  total = 0.0;
  outfile.open("HealthTech.txt");
  outfile << "HealthTech.txt" << endl;
  outfile << "-------------------------------------" << endl;
  for (int i = 0; i< c.size(); i++)
  {
    if (c.at(i) == "HealthTech")
    {
      outfile << setw(19) << left << e.at(i).fullName();
      outfile << setw(4) << left << e.at(i).getEmployeeId();
      outfile << setw(15) << left << e.at(i).getCompanyName();
      outfile << fixed << setprecision(2) << "$" << e.at(i).totalPay();
      outfile << endl;
      total += e.at(i).totalPay();
    }
  }
  outfile <<"Total: $"<<total;
  outfile.close();
}
