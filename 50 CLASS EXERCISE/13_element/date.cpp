#include <iostream> 
#include "date.hpp" 

Date::Date(unsigned short day, month_t month, unsigned short year) {
	if (day < 1 || day > 31 || (day > 28 && month == 2)) {
		std::cout << "input date invalid; date initialised to 00/00/00";
		m_day = m_month = m_year = 0;
	}
	else {
		m_day = day; 
		m_month = month; 
		m_year = year; 
	}
}

Date::Date(month_t month, unsigned short year) : 
	m_day(0), 
	m_month(month), 
	m_year(year) {
}

Date::Date(unsigned short year) :
	m_day(0), 
	m_month(0), 
	m_year(year) {
}

std::ostream& operator<<(std::ostream& os, const Date& obj) {
	if (obj.m_day != 0)
		os << obj.m_day << "/";
	if (obj.m_month != 0) {
		print_month(obj.m_month);
		os << '/';
	}
	os << obj.m_year; 

	return os; 
}

static void print_month(unsigned short month) {
	switch (month) {
	case 1: 
		std::cout << "January"; 
		break; 
	case 2: 
		std::cout << "February"; 
		break; 
	case 3:   
		std::cout << "March"; 
		break; 
	case 4: 
		std::cout << "April"; 
		break; 
	case 5: 
		std::cout << "May"; 
		break; 
	case 6: 
		std::cout << "June"; 
		break; 
	case 7: 
		std::cout << "July"; 
		break; 
	case 8: 
		std::cout << "august"; 
		break; 
	case 9: 
		std::cout << "September"; 
		break; 
	case 10: 
		std::cout << "October"; 
		break; 
	case 11: 
		std::cout << "November"; 
		break; 
	case 12: 
		std::cout << "December"; 
	}
}