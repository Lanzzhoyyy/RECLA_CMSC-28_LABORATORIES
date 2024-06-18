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
    /* Default constructor */
    Person() {}

    /* Getters of each attribute */
    const string& getFname() { return Fname; }
    const string& getLname() { return Lname; }
    const char& getGender() { return Gender; }

    /* Setters of each attribute */
    void setFname(const string& pfname) { Fname = pfname; }
    void setLname(const string& plname) { Lname = plname; }
    void setGender(const char& pgender) { Gender = pgender; }
};

