
//   Name: Aaron Pritchard, Josh Brinker
//   Filename: HW11partA_secure.cpp
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
    cout << "HW11partA_secure.cpp" << endl;
    int number = 1;
    int buffer[BUFFERSIZE] = {0};
    cout << "Pre buffer overflow: " << endl;
    cout << "Size of buffer: " << BUFFERSIZE << endl;
    cout << "Number: " << number << endl;

    // simulate user inputing data to cause overflow
    cout << endl << "User Input -- How many ID's would you like to update: " << endl << "\tUser enters 6" << endl << endl;
    int numberOfIds = 6;

    // User wanted more ID's than existed, so instead return all ID's.
    if (numberOfIds > BUFFERSIZE)
    {
        cout << "Number of ID's " << numberOfIds << " exceeds max size. Returning " << BUFFERSIZE << endl << endl;
        numberOfIds = BUFFERSIZE;
    }
    // Since the code verifies user input can never exceed array length
    // the buffer will never overflow.

    for (int i = 0; i < numberOfIds; i++) // No longer going out of bounds of array
    {
        buffer[i] = 20;
    }

    cout << "Post buffer overflow: " << endl;
    cout << "Number: " << number << endl;

    return 0;
}