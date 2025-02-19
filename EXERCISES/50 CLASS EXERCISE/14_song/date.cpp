#include <iostream>
#include <cstring> 
#include "date.hpp" 

Date::Date(
	unsigned short day, 
	month_t month, 
	unsigned short year
) : m_day(day), m_month(month), m_year(year) {

}

Date::Date(month_t month, unsigned short year) : 
	m_day(0), m_month((unsigned short)month), m_year(year) {

}

Date::Date(unsigned short year) : 
	m_day(0), m_month(0), m_year(year) {
		
}


std::string Date::month_str() const{
	switch(m_month) {
		case 1: return "January"; 
		case 2: return "February";   
		case 3: return "March";  
		case 4: return "April"; 
		case 5: return "May"; 
		case 6: return "June";  
		case 7: return "July";  
		case 8: return "August";  
		case 9: return "September";  
		case 10: return "Octomber";  
		case 11: return "November";  
		case 12: return "December"; 
	} 

	return ""; 
}

std::ostream& operator<<(std::ostream& os, const Date& date) {
	if(date.m_day != 0)
		os << date.m_day << " ";
	if(date.m_month != 0) 
		os << date.month_str() << " "; 
	
	os << date.m_year; 
	
	return os; 
}