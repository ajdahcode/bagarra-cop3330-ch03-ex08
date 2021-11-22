/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 alden bagarra
 */

#include <iostream>
using namespace std;

int main()
{
  // Initialize the number variable to 0
  int number = 0;
  // Prompt the user for an integer/number
  cout << "Enter an integer(Don't include commas): ";
  // Take input and insert it to the number variable
  if (cin >> number)
  {
    // If number is even use the modulo 2 to 
    // check if it is an even number
    if ((number % 2) == 0)
      cout << "The value " << number << " is an even number.\n";
    // If it doesn't equal 0 it is an odd number
    else
      cout << "The value " << number << " is an odd number.\n";
  }
  // If the input isn't a number, then it is invalid.
  else
    cout << "Invalid Value.\n";

  return 0;
}