#include "Student.h"
#include <iostream>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main() {
    // Create a Student object
    Student student;

    // Variables to hold user input
    string inputStr;
    char inputChar;

    system("cls"); 
    cout << "------------------------------------------------------------------------" << endl
         << "\t\t     Programming Exercise 8 - OOP 4" << endl
         << "\t\t  Submitted by : Lance Andrei E. Recla" << endl
         << "\t\t\t  Date done: 05/22/2024" << endl
         << "\t\t\t    Subject: CMSC 28" << endl
         << "------------------------------------------------------------------------" << endl;

    // Get user input for inherited attributes from Person
    cout << "\nEnter Student First Name: ";
    getline(cin, inputStr);
    student.setFname(inputStr);

    cout << "\nEnter Student Last Name: ";
    getline(cin, inputStr);
    student.setLname(inputStr);

    cout << "\nEnter Student Gender (M/F): ";
    cin >> inputChar;
    student.setGender(inputChar);
    cin.ignore(); 

    cout << "\nEnter Student Email: ";
    getline(cin, inputStr);
    student.setemailAdd(inputStr);

    cout << "\nEnter Student Contact Number: ";
    getline(cin, inputStr);
    student.setcpNumber(inputStr);

    // Get user input for specific attributes for Student
    cout << "\nEnter Student Number: ";
    getline(cin, inputStr);
    student.setstudentNum(inputStr);

    cout << "\nEnter Course: ";
    getline(cin, inputStr);
    student.setCourse(inputStr);

    cout << "\nEnter Department: ";
    getline(cin, inputStr);
    student.setDepartment(inputStr);

    cout << "\nEnter College: ";
    getline(cin, inputStr);
    student.setCollege(inputStr);

    // Output information
    cout << "\n------------------------------------------------------------------------" << endl
        << "                            CONFIRMATION" << endl
        << "------------------------------------------------------------------------" << endl;

    cout << "\nHello, " << student.getFname() << " " << student.getLname() 
              << "! Welcome to UP Mindanao and congratulations! "
              << "We are \npleased to inform you that you are admitted in the "
              << student.getCourse() << " program under \nthe Department of "
              << student.getDepartment() << ", College of " << student.getCollege() 
              << ". \nYour Student number is " << student.getstudentNum() << ". " 
              << "Goodluck on your journey to get that sablay!" << endl;
    return 0;
}
