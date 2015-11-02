//Los Angeles Valley College
//CSIT 839
//Spring 2014
//Steve Mario Correa
//Assignment 1
//This application does five tasks.  It tells a user to enter a date.  It waits for a date.  It checks to see if the date is valid.  If the date is valid it will store it, then print that date.  If the date is not valid, it will store a predesignated date and print that date.
#include "date.h"
#include <iostream>
void Date::assignValuesDesignatedForWhenInputIsInvalid() {
	year = 2008;
	month = 9;
	day = 2;
}
void Date::setDate(int nYear, int nMonth, int nDay) {
	if(bValuesAreValid(nYear, nMonth, nDay)) {
		year = nYear;
		month = nMonth;
		day = nDay;
	} else {
		assignValuesDesignatedForWhenInputIsInvalid();
	}
}
void Date::printDate() {
	std::cout << month << "/" << day << "/" << year;
}
bool Date::bValuesAreValid(int nYear, int nMonth, int nDay) {
	bool bValuesAreValid = false;
	if(1 <= nMonth)
		if(nMonth <= 12)
			if(1 <= nDay)
				if(nDay <= 31)
					if(1900 <= nYear)
						if(nYear <= 2008)
							bValuesAreValid = true;
	return bValuesAreValid;
}