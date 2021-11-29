#include "iostream"

/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Chase Cutshall
 */

using namespace std;

int main()
{
cout << "Please enter an integer: \n";

int value;
int divisByTwo = 2;
int equalToZero = 0;

cin >> value;

if (value % divisByTwo == equalToZero)
    cout << "The value " << value << " is an even number." << endl;
else cout << "The value " << value << " is an odd number." << endl;


return 0;
}