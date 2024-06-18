#include<iostream>

// Function prototype declaration
void progdescription();
void readdata(int &x, int &y, int &z);
int getsmall(int x, int y, int z);
int getlarge(int x, int y, int z);
void showdata(int x, int y, int z, int smallval, int largeval, int diff);

using namespace std;

int main(){

//Declaration of variables
int x, y, z, smallval, largeval, diff;

//Calling of different functions
progdescription();

readdata(x, y, z);

smallval = getsmall(x, y, z);

largeval = getlarge(x, y, z);

diff = largeval-smallval;

showdata(x, y, z, smallval, largeval, diff);

return 0;

}

// Definition of the progdescription function
void progdescription() {
    system("cls");
    cout << "------------------------------------------------------------------------" << endl
        << "\t\t\t LARGEST & smallest" << endl
        << "This program finds the largest and smallest among three numbers given" << endl 
        << "\t\tMade by : Lance Andrei E. Recla" << endl
        << "Date done: 04/27/2024\t\t\t\t\tSubject: CMSC 28" << endl
        << "------------------------------------------------------------------------" << endl;
}

// Definition of the readdata function
void readdata(int &x, int &y, int &z) {
    cout << endl;
    cout << "Input value of x: ";
    cin >> x;
    cout << "Input value of y: ";
    cin >> y;
    cout << "Input value of z: ";
    cin >> z;
    cout << endl;
}

// Definition of the getsmall function
int getsmall(int x, int y, int z) {
    if (x < y && x < z) {
        return x;
    } else if (y < x && y < z){
        return y;
    } else {
    return z;
    }
}

// Definition of the getlarge function
int getlarge(int x, int y, int z) {
    if (x > y && x > z) {
        return x;
    } else if (y > x && y > z){
        return y;
    } else {
        return z;
    }
}

// Definition of the showdata function
void showdata(int x, int y, int z, int smallval, int largeval, int diff) {
    cout << "The values are " << x << ", " << y << ", and " << z << endl
         << "The smallest value is: " << smallval << endl
         << "The largest value is: " << largeval << endl
         << "The difference between the largest and smallest values is: " << diff << endl;
}
