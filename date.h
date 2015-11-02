//Los Angeles Valley College
//CSIT 839
//Spring 2014
//Steve Mario Correa
//Assignment 1
//This application does five tasks.  It tells a user to enter a date.  It waits for a date.  It checks to see if the date is valid.  If the date is valid it will store it, then print that date.  If the date is not valid, it will store a predesignated date and print that date.
#ifndef DATE_H
#define DATE_H
class Date {
	private:
		int month, day, year;
		void assignValuesDesignatedForWhenInputIsInvalid();
	public:
		void setDate(int, int, int);
		void printDate();
		static bool bValuesAreValid(int, int, int);
};
#endif