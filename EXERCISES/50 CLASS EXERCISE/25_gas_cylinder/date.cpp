#include <iostream> 
#include <iomanip> 
#include "date.hpp" 

Date::Date() : m_day(0), m_month(0), m_year(0) {}

Date::Date(unsigned short year) : 
	m_year(year), m_month(0), m_day(0) {} 
	
Date::Date(month_t month, unsigned short year) : 
	m_day(0), m_month(month), m_year(year) {} 
	
Date::Date(unsigned short day, month_t month, unsigned short year) {
	if(
		day > 31 || 
		(month==FEB && is_leap_year(year) && day>29) || 
		(month==FEB && !is_leap_year(year) && day>28) || 
		((month==APR || month==MAY || month==JUL || month==AUG || month == OCT || month==DEC) && day>30)
	) {
		std::cout << "Invalid Date input" << std::endl; 
		m_day = m_month = m_year = 0; 
		return; 
	} 
	m_day = day; 
	m_month = month; 
	m_year = year; 
}

bool Date::is_leap_year(unsigned short year) {
	if((year%4==0 && year%100!=0) || year%400==0)
		return true; 
	return false; 
} 

std::ostream& operator<<(std::ostream& os, const Date& obj) {
	if(obj.m_day != 0)
		os << std::setw(2) << std::setfill('0') << obj.m_day << "/"; 
	if(obj.m_month != 0) 
		os << obj.get_month_str() << "/"; 
	os << std::setw(4) << std::setfill('0') << obj.m_year; 
	
	return os; 
} 

std::string Date::get_month_str() const{
	switch(this->m_month) {
		MONTH_CASE(JAN, "January"); 
		MONTH_CASE(FEB, "February"); 
		MONTH_CASE(MAR, "March"); 
		MONTH_CASE(APR, "April"); 
		MONTH_CASE(MAY, "May"); 
		MONTH_CASE(JUN, "June"); 
		MONTH_CASE(JUL, "July"); 
		MONTH_CASE(AUG, "August");
		MONTH_CASE(SEP, "September"); 
		MONTH_CASE(OCT, "Octomber"); 
		MONTH_CASE(NOV, "November");  
		MONTH_CASE(DEC, "December"); 
	} 
	return ""; 
} 