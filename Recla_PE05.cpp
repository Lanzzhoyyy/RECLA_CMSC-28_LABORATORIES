#include <iostream>
#include <cmath>

/* Declare functions prototype*/
void progDescription();
void inputData(int numbers[], int &size);
int getSmallest(int numbers[], int size);
int getLargest(int numbers[], int size);
double getAverage(int numbers[], int size);
double findStandardDeviation(int numbers[], int size);
double findVariance(int numbers[], int size);
void displayData(int min, int max, double avg, double stddev, double variance);

using namespace std;
const int MAX_SIZE = 10; /* Set maximum size of array to 10*/

int main() {
    int numbers[MAX_SIZE]; /* Create an array to store integers */
    int size;

    /* Display program description*/
    progDescription();

    /*Get data from user input*/
    inputData(numbers, size);
    
    /*Checks if there is no entered data*/
    if (size == 0) {
        cout << endl;
        cout << "No data entered. Please restart the program if you want to try again" << endl;
        return 0;
    }
    
    /* Stores smallest, largest, average, standard deviation, and variance to variables*/
    int smallest = getSmallest(numbers, size);
    int largest = getLargest(numbers, size);
    double average = getAverage(numbers, size);
    double standard_deviation = findStandardDeviation(numbers, size);
    double variance = findVariance(numbers, size);
    
    /* Displays summarized data*/
    displayData(smallest, largest, average, standard_deviation, variance);
    
    return 0;
}

/* Function to display program description*/
void progDescription(){
        system("cls"); /* Clear console screen */
        cout << "------------------------------------------------------------------------" << endl
            << "\t\t     Programming Exercise 5 - OOP 1" << endl
            << "\t\t  Submitted by : Lance Andrei E. Recla" << endl
            << "\t\t\t  Date done: 05/11/2024" << endl
            << "\t\t\t    Subject: CMSC 28" << endl
            << "------------------------------------------------------------------------" << endl;
    }

/* Function to store user input to an array */
void inputData(int numbers[], int &size) {
    cout << endl;
    for (int i = 0; i < MAX_SIZE; ++i) {
        cout << "Enter integer: (enter 0 to stop): ";
        int input;
        cin >> input;
        if (input == 0 || i == MAX_SIZE - 1) {
            size = i;
            break;
        }
        numbers[i] = input;
    }
}

/* Function to find smallest number in the array */
int getSmallest(int numbers[], int size) {
    int small = numbers[0];
    for (int i = 1; i < size; ++i) {
        if (numbers[i] < small) {
            small = numbers[i];
        }
    }
    return small;
}

/* Function to find largest number in the array */
int getLargest(int numbers[], int size) {
    int large = numbers[0];
    for (int i = 1; i < size; ++i) {
        if (numbers[i] > large) {
            large = numbers[i];
        }
    }
    return large;
}

/* Function to calculate the average of the numbers in the array */
double getAverage(int numbers[], int size) {
    double sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += numbers[i];
    }
    return sum / size;
}

/* Function to calculate the standard deviation of the numbers in the array */
double findStandardDeviation(int numbers[], int size) {
    return sqrt(findVariance(numbers, size));
}

/* Function to calculate the variance of the numbers in the array */
double findVariance(int numbers[], int size) {
    double average = getAverage(numbers, size);
    double variance = 0;
    for (int i = 0; i < size; ++i) {
        variance += pow(numbers[i] - average, 2);
    }
    return variance / size;
}

/* Function to display summarized data from calculation */
void displayData(int smallest, int largest, double average, double standard_deviation, double variance) {
    cout << endl;
    cout << "Summarization of Data" << endl;
    cout << "Smallest: " << smallest << endl;
    cout << "Largest: " << largest << endl;
    cout << "Average: " << average << endl;
    cout << "Standard Deviation: " << standard_deviation << endl;
    cout << "Variance: " << variance << endl;
}