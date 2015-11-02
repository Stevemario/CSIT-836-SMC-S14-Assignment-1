//Los Angeles Valley College
//CSIT 839
//Spring 2014
//Steve Mario Correa
//Assignment 1
//This application does five tasks.  It tells a user to enter a date.  It waits for a date.  It checks to see if the date is valid.  If the date is valid it will store it, then print that date.  If the date is not valid, it will store a predesignated date and print that date.
#include "date.h"
#include <iostream>
int main()
{
Date d1;
int m, d, y;
std::cout << "Enter month, day and year separated by spaces: ";
std::cin >> m >> d >> y;
// call setDate
d1.setDate(y, m, d);
// call printDate
d1.printDate();
return 0;
}