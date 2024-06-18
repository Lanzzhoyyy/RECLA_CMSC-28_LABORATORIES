#include <iostream>
#include <string>

using std::string;

class Person {
private:
    /* Attributes */    
    string Fname;
    string Lname;
    char Gender;

public:
    /* Attributes */    
    string emailAdd;
    string cpNumber;
    
    /* Default constructor */
    Person() {}

    /* Getters of each attribute */
    const string& getFname() { return Fname; }
    const string& getLname() { return Lname; }
    const char& getGender() { return Gender; }
    const string& getemailAdd() { return emailAdd; }
    const string& getcpNumber() { return cpNumber; }

    /* Setters of each attribute */
    void setFname(const string& pfname) { Fname = pfname; }
    void setLname(const string& plname) { Lname = plname; }
    void setGender(const char& pgender) { Gender = pgender; }
    void setemailAdd(const string& pemailadd) { emailAdd = pemailadd; }
    void setcpNumber(const string& pcpnumber) { cpNumber = pcpnumber; }
};



