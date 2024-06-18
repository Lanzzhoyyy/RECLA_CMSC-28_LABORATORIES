#include <iostream>
#include <string>
#include "Person.h"

using std::string;

class Student : public Person
{
private:
    /* Attributes */    
    string studentNum;
    
public:
    /* Attributes */    
    string Course;
    string Department;
    string College;

    /* Default constructor */
    Student(){}

    /* Getters of each attribute */
    const string& getstudentNum() { return studentNum; }
    const string& getCourse() { return Course; }
    const string& getDepartment() { return Department; }
    const string& getCollege() { return College; }

    /* Setters of each attribute */
    void setstudentNum(const string& sstudentnum) { studentNum = sstudentnum; }
    void setCourse(const string& scourse) { Course = scourse; }
    void setDepartment(const string& sdepartment) { Department = sdepartment; }
    void setCollege(const string& scollege) { College = scollege; }
};

