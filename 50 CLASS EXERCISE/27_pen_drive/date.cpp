#include <iostream>
#include "date.hpp"

Date::Date() : m_day(0), m_month(0), m_year(0) {} 

Date::Date(unsigned short year) : m_year(year), m_day(0), m_month(0) {} 

Date::Date(month_t month, unsigned short year) : m_day(0), m_month(month), m_year(year) {}  

Date::Date(unsigned short day, month_t month, unsigned short year) {
	m_day = m_month = m_year = 0; 
	if(day > 31 || day < 1) {
		puts("Invalid Date Error");
		exit(EXIT_FAILURE); 
	} 
	if(((is_leap_year(year)) && month==FEB && day > 29) || (!(is_leap_year(year)) && month==FEB && day > 28)) {
		puts("Invalid Date Error"); 
		exit(EXIT_FAILURE); 
	} 
	if((month==APR || month==JUN || month==SEPT || month==NOV) || day > 30) {
		puts("Invalid Date Error"); 
		exit(EXIT_FAILURE); 
	} 
	
	m_day = day; 
	m_month = month; 
	m_year = year; 
} 

bool Date::is_leap_year(unsigned short yy) {
	if(yy%400 == 0 || (yy%4==0 && yy%100!=0))
		return true; 
	return false; 
} 

std::ostream& operator<<(std::ostream& os, const Date& date) {
	if(date.m_day == 0 && date.m_month == 0 && date.m_year == 0) {
		os << "00/00/00"; 
		return os; 
	} 
	
	if(date.m_day != 0) 
		os << date.m_day << "/"; 
	if(date.m_month != 0) 
		os << date.m_month << "/"; 
	os << date.m_year; 
	
	return os; 
} 

std::ostream& operator<<(std::ostream& os, const month_t month) {
	switch(month) {
		case JAN: 
			os << "January"; 
			break; 
		case FEB: 
			os << "February"; 
			break; 
		case MAR: 
			os << "March"; 
			break; 
		case APR: 
			os << "April"; 
			break; 
		case MAY: 
			os << "May"; 
			break; 
		case JUN: 
			os << "June"; 
			break; 
		case JUL: 
			os << "July"; 
			break; 
		case AUG: 
			os << "August"; 
			break; 
		case SEPT: 
			os << "September"; 
			break; 
		case OCT: 
			os << "Octomber"; 
			break; 
		case NOV: 
			os << "November"; 
			break; 
		case DEC: 
			os << "Decemeber"; 
	} 
	return os; 
} 