
//   Name: Aaron Pritchard, Josh Brinker
//   Filename: bufferoverflow.cpp
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


using namespace std;

int main(){
    int number = 1;
    int buffer[10];
    cout << "Pre buffer overflow: " << endl;
    cout << "Number: " << number << endl;

    for (int i = 0; i <= 15; i++) // Here we are clearly going out of bounds in the declared elts in the array 
    {
        buffer[i] = 20;
    }
    // This illustrates the overflow into another variable.
    cout << "Post buffer overflow: " << endl;
    cout << "Number: " << number << endl;
    

    return 0;
}