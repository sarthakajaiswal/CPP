#include <iostream> 
#include <iomanip> 
#include "date.hpp" 

Date::Date(unsigned short year) : 
    m_day(0), m_month(0), m_year(year) {}

Date::Date(month_t month, unsigned short year) : 
    m_day(0), m_month(month), m_year(year) {}

Date::Date(unsigned short day, month_t month, unsigned short year) {
    if(day > 31 || 
        (month==FEB && is_leap_year(year) && day > 29) || 
        (month == FEB && !is_leap_year(year) && day > 28) || 
        ((month == APR || month==SEPT || month == NOV) && day > 30)) {
            std::cout << "Invalid date input, initializing date to 00/00/00" << std::endl; 

            m_year = 0; 
            m_month = 0; 
            m_day = 0; 
    } 
    else {
        m_day = day; 
        m_month = month; 
        m_year = year; 
    }
}

std::ostream& operator<<(std::ostream& os, const Date& obj) {
    if(obj.m_day != 0) 
        os << std::setw(2) << std::setfill('0') << obj.m_day << "/"; 
    if(obj.m_month != 0)
        os << obj.get_month_string() <<  "/"; 
    os << std::setw(4) << std::setfill('0') << obj.m_year;  

    return os; 
}

bool Date::is_leap_year(unsigned short year) {
    if(year%100 == 0 && year%400 != 0)
        return false; 
    if(year % 4 != 0)
        return false; 

    return true; 
}

std::string Date::get_month_string() const{
    switch(m_month) {
        case JAN: return "January"; 
        case FEB: return "February"; 
        case MAR: return "March"; 
        case APR: return "April"; 
        case MAY: return "May"; 
        case JUN: return "June"; 
        case JUL: return "July"; 
        case AUG: return "August"; 
        case SEPT: return "Semptember"; 
        case OCT: return "Octomber"; 
        case NOV: return "November"; 
        case DEC: return "December"; 
    }
}