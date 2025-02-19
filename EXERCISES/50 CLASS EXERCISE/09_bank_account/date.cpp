#include <iostream>
#include "Date.hpp" 

Date::Date(short day, month_t month, short year) : 
	m_day(day), 
	m_month(month), 
	m_year(year) {
	
	}
	
std::ostream& operator<<(std::ostream& os, const Date& date) {
	os << date.m_day << "/" << date.m_month << "/" << date.m_year; 
	
	return os; 
}

std::ostream& operator<<(std::ostream& os, const month_t& month) {
	switch(month) {
		case 1: 
			os << "January"; 
			break; 
		case 2:
			os << "February"; 
			break; 
		case 3:
			os << "March"; 
			break; 
		case 4: 
			os << "April"; 
			break; 
		case 5: 
			os << "May"; 
			break; 
		case 6: 
			os << "June"; 
			break; 
		case 7: 
			os << "July"; 
			break; 
		case 8: 
			os << "August"; 
			break; 
		case 9: 
			os << "September"; 
			break; 
		case 10: 
			os << "October"; 
			break; 
		case 11: 
			os << "November"; 
			break; 
		case 12: 
			os << "December"; 
			break; 
	}
	
	return os; 
}	