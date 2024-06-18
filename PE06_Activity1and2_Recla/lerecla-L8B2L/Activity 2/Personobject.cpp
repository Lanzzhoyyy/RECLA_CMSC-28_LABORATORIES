#include <iostream>
#include "Person.h" // add Person.h as a library to this program
using namespace std;

int main() {
    int a;
    char g;
    string course;
    int f;

    cout << "Creating the 1st Person object (p) using the 1st Constructor" << endl;
    Person p;

    cout << "\nInput age: ";
    cin >> a;
    p.setage(a);

    cout << "Input gender: ";
    cin >> g;
    p.setgender(g);

    cout << "Input Course Name (courseName_courseNumber): ";
    cin >> course;
    p.setCourseName(course);

    cout << "Input grade: ";
    cin >> f;
    p.setGrade(f);

    cout << "Age = " << p.getage() << endl;
    cout << "Gender = " << p.getgender() << endl;

    cout << "\nThis is an example of method overloading: \n";
    cout << "Using view 1: \n";
    p.view();
    
    return 0;
}
