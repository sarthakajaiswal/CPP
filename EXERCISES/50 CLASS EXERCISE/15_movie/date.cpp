#include <iostream> 
#include "date.hpp" 

Date::Date(
	unsigned short day, 
	month_t month, 
	unsigned short year
) : 
	m_day(day), 
	m_month(month), 
	m_year(year) {	
	//for now all values of date are considered valid
}  

Date::Date(month_t month, unsigned short year) : 
	m_day(0), m_month(month), m_year(year) {
}

Date::Date(unsigned short year) : 
	m_day(0), 
	m_month(0), 
	m_year(year) {
}

std::ostream& operator<<(std::ostream& os, const Date& obj) {
	if(obj.m_day != 0) 
		os << obj.m_day << "/";
	if(obj.m_month != 0) 
		os << obj.m_month << "/"; 
	os << obj.m_year; 
	
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
			os << "Octomber"; 
			break; 
		case 11: 
			os << "November"; 
			break; 
		case 12: 
			os << "December"; 
	} 
	
	return os; 
}