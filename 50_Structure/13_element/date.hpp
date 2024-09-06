#ifndef _DATE_HPP 
#define _DATE_HPP 

#include <iostream> 

typedef enum month{
	JANUARY=1, 
	FEBRUARY, 
	MARCH, 
	APRIL, 
	MAY, 
	JUNE, 
	JULY, 
	AUGUST, 
	SEPTEMBER, 
	OCTOMBER, 
	NOVEMBER, 
	DECEMBER
}month_t; 

static void print_month(unsigned short month); 

class Date {
private: 
	unsigned short m_day; 
	unsigned short m_month; 
	unsigned short m_year; 

public: 
	Date(unsigned short day, month_t month, unsigned short yeaer); 
	Date(month_t month, unsigned short year);
	Date(unsigned short year); 

	friend std::ostream& operator<<(std::ostream& os, const Date& obj); 
};

#endif 