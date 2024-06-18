#include <iostream>

// Function prototype declaration
void progdescription();
int binaryConverter(int decimalNumber);

using namespace std;

int main() {
    //Declaration of variables
    int decimalNumber;

    // Call to the progdescription function
    progdescription();

    //Asks user-input for decimal number
    cout << endl;
    cout << "Input a decimal number: ";
    cin >> decimalNumber;

    // Call to the binaryConverter function
    int binaryNumber = binaryConverter(decimalNumber);

    //Displays Binary equivalent
    cout << "The Binary equivalent of " << decimalNumber << " is " << binaryNumber << endl;

    return 0;
}

// Definition of the progdescription function
void progdescription() {
        system("cls");
        cout << "------------------------------------------------------------------------" << endl
            << "\t\t\t Decimal to Binary Converter" << endl
            << "     This program converts decimal numbers to its binary equivalent" << endl 
            << "\t\t       Made by : Lance Andrei E. Recla" << endl
            << "Date done: 04/27/2024\t\t\t\t\tSubject: CMSC 28" << endl
            << "------------------------------------------------------------------------" << endl;
    }


// Definition of the binaryConverter function
int binaryConverter(int decimalNumber) {
    int binaryNumber = 0, base = 1, remainder;
    
    while (decimalNumber > 0) {
        remainder = decimalNumber % 2;
        binaryNumber += remainder * base;
        decimalNumber /= 2;
        base *= 10;   
    }
    
    return binaryNumber;
}
