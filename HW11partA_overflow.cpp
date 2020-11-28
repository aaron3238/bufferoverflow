
//   Name: Aaron Pritchard, Josh Brinker
//   Filename: HW11partA_overflow.cpp
//   Class: CSC328 
//   Prof: Dr. Frye 
//   Major: CS
//   Date: 25 November 2020
//   Assignment: Buffer overflow security program
//   Due: 3 December 2020
//   Compile: make
//   Execute: make test
//   Purpose: Illustrates a program susceptible to buffer overflow attack.
//
#include <iostream>
#include <iomanip>

#define BUFFERSIZE 5

using namespace std;

int main(){
    cout << "HW11partA_overflow.cpp" << endl;
    int number = 1;
    int buffer[BUFFERSIZE];
    cout << "Pre buffer overflow: " << endl;
    cout << "Number: " << number << endl;

    /*
    simulate user inputting data to cause overflow. By taking the 
    number straight from the user without validation and looping over the array 
    according to the number from the user, we expose the system
    to a buffer overflow.
    */
    cout << endl << "User Input -- How many ID's would you like to update: " << endl << "\tExample: User enters 6" << endl << endl;
    int numberOfIds = 6;

    for (int i = 0; i <= numberOfIds; i++) // Here we are clearly going out of bounds in the declared elts in the array 
    {
        buffer[i] = 20;
    }
    // This illustrates the overflow into another variable.
    cout << "Post buffer overflow: " << endl;
    cout << "Number: " << number << endl;

    cout << endl << "------------------------------------" << endl << endl;

    return 0;
}