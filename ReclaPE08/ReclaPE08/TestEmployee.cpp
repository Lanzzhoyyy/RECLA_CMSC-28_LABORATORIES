#include "Employees.h"
#include <iostream>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main() {
    // Create an Employee object
    Employee employee;

    // Variables to hold user input
    string inputStr;
    char inputChar;
    float inputFloat;

    system("cls"); 
    cout << "------------------------------------------------------------------------" << endl
         << "\t\t     Programming Exercise 8 - OOP 4" << endl
         << "\t\t  Submitted by : Lance Andrei E. Recla" << endl
         << "\t\t\t  Date done: 05/22/2024" << endl
         << "\t\t\t    Subject: CMSC 28" << endl
         << "------------------------------------------------------------------------" << endl;

    // Get user input for inherited attributes from Person
    cout << "\nEnter Employee First Name: ";
    getline(cin, inputStr);
    employee.setFname(inputStr);

    cout << "\nEnter Employee Last Name: ";
    getline(cin, inputStr);
    employee.setLname(inputStr);

    cout << "\nEnter Employee Gender (M/F): ";
    cin >> inputChar;
    employee.setGender(inputChar);
    cin.ignore(); // To consume the newline character left by cin

    cout << "\nEnter Employee Email: ";
    getline(cin, inputStr);
    employee.setemailAdd(inputStr);

    cout << "\nEnter Employee Contact Number: ";
    getline(cin, inputStr);
    employee.setcpNumber(inputStr);

    // Get user input for specific attributes for Employee
    cout << "\nEnter Employee Number: ";
    getline(cin, inputStr);
    employee.setempNum(inputStr);

    cout << "\nEnter Position: ";
    getline(cin, inputStr);
    employee.setPosition(inputStr);

    cout << "\nEnter Office: ";
    getline(cin, inputStr);
    employee.setOffice(inputStr);

    cout << "\nEnter Salary: ";
    cin >> inputFloat;
    employee.setSalary(inputFloat);
    cin.ignore(); // To consume the newline character left by cin

    // Output information
    cout << "\n------------------------------------------------------------------------" << endl
         << "                            CONFIRMATION" << endl
         << "------------------------------------------------------------------------" << endl;

    cout << "\nHello, " << employee.getFname() << " " << employee.getLname()
              << "! Welcome to our company. We are pleased to inform you \nthat you are hired as a "
              << employee.getPosition() << " in the " << employee.getOffice()
              << " office. \nYour employee number is " << employee.getempNum() 
              << " and your salary is " << employee.getSalary() << "." 
              << "\nWe look forward to working with you! :)" << endl;
    return 0;
}
