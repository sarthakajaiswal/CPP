#include <iostream> 
#include <iomanip> 
#include "date.hpp" 

Date::Date(unsigned int day, month_t month, unsigned int year) {
    if(day > 31 || (month==FEB && is_leap_year(year) && day > 29) || ((month==APR || month==JUNE || month==SEPT || month==NOV) && day>30) || (month==FEB && !is_leap_year(year) && day > 28)) {
        std::cout << "Invalid date input, initializing to 00/00/00" << std::endl; 
        m_day = m_month = m_year = 0; 
    } else {
        m_day = day; 
        m_month = month; 
        m_year = year; 
    }
}

Date::Date(month_t month, unsigned int year) : 
    m_day(0), m_month(month), m_year(year) {}

Date::Date(unsigned int year) : 
    m_day(0), m_month(0), m_year(year) {}

bool Date::is_leap_year(unsigned int year) {
    return ((year%4==0 && year%100!=0) || year%400==0); 
}

std::string Date::get_month_string() const{
    switch(this->m_month) {
        case 1: return "January"; 
        case 2: return "Febreuary"; 
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

std::ostream& operator<<(std::ostream& os, const Date& obj) {
    if(obj.m_day != 0)
        os << std::setw(2) << std::setfill('0') << obj.m_day << "/";
    if(obj.m_month != 0)
        os << obj.get_month_string() << "/"; 
    os << obj.m_year; 

    return os;  
}