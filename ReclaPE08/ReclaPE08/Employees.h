#include <iostream>
#include <string>
#include "Person.h"

using std::string;

class Employee : public Person 
{
private:
    /* Attributes */    
    string empNum;
    
public:
    /* Attributes */    
    string Position;
    string Office;
    float Salary;
    
    /* Default constructor */
    Employee(){}

    /* Getters of each attribute */
    const string& getempNum() { return empNum; }
    const string& getPosition() { return Position; }
    const string& getOffice() { return Office; }
    float getSalary() { return Salary; }

    /* Setters of each attribute */
    void setempNum(const string& eempnum) { empNum = eempnum; }
    void setPosition(const string& eposition) { Position = eposition; }
    void setOffice(const string& eoffice) { Office = eoffice; }
    void setSalary(float esalary) { Salary = esalary; }
};
