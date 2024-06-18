#include <iostream>
using namespace std;

class Person {
private:
    int age;
    char gender;
    string courseName;
    int grade;

public:
    Person() {}
    Person(int newage) {
        age = newage;
        gender = 'M';
    }

    Person(int newage, char c) {
        age = newage;
        gender = c;
    }

    void setage(int newage) {
        if (newage >= 0) {
            age = newage;
        } else {
            cout << "invalid age!!!" << endl;
        }
    }

    int getage() {
        return age;
    }

    void setgender(char c) {
        if ((c == 'M') || (c == 'F')) {
            gender = c;
        } else {
            cout << "invalid gender!!!" << endl;
        }
    }

    char getgender() {
        return gender;
    }

    void setCourseName(string course) {
        courseName = course;
    }

    void setGrade(int f) {
        grade = f;
    }

    string gradeStatus() {
        if (grade >= 60) {
            return "You have Passed";
        } else {
            return "You have Failed";
        }
    }

    int getgrade() { 
        return grade;
    }

    string getcourseName() { 
        return courseName;
    }
    // Method view is an overloaded method. This means that we have the same method
    // name but with different signature: (), (int age) and (int age, char gender)
    void view() {
        cout << "Person age is = " << getage() << endl;
        cout << "Person gender is = " << getgender() << endl;
        cout << "Course: " << getcourseName() << endl;
        cout << "Grade: " << getgrade() << " (" << gradeStatus() << ")" << endl;
    }
};
