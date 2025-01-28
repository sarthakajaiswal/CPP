#ifndef _DATE_H
#define _DATE_H

#include <iostream>

typedef enum months {
	JAN = 1, 
	FEB, 
	MAR, 
	APR, 
	MAY, 
	JUNE, 
	JULY, 
	AUG, 
	SEPT, 
	OCT, 
	NOV, 
	DEC
}month_t; 

class Date {
	private: 
		short m_day; 
		month_t m_month;
		short m_year; 
		
	public: 		
		Date(short day, month_t month, short year);
		friend std::ostream& operator<<(std::ostream& os, const Date& date); 
}; 

std::ostream& operator<<(std::ostream& os, const month_t& month); 

#endif