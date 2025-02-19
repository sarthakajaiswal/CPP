#include <iostream> 
#include <iomanip> 
#include "date.hpp" 

Date::Date(unsigned short year) : 
    m_day(0), m_month(0), m_year(0) {}

Date::Date(month_t month, unsigned short year) : 
    m_month(month), m_year(year), m_day(0) {}

Date::Date(unsigned short day, month_t month, unsigned short year) {
    if(is_date_valid(day, month, year)) {
        m_month = month; 
        m_day = day; 
        m_year = year; 
    }
    else {
        std::cout << "Invalid date input, initializing date to 00/00/00"; 
        m_day = m_month = m_year = 0; 
    }
}

bool Date::is_leap_year(unsigned short year) {
    if((year%4 && (year%100 != 0)) || year % 400 == 0)
        return true; 
    
    return false; 
}

bool Date::is_date_valid(unsigned short day, month_t month, unsigned short year) {
    if(day > 31 || 
        (day>28 && is_leap_year(year) && month==FEB) || 
        (day>29 && is_leap_year(year) && month==FEB) || 
        ((month==APR, month==JUN, month==SEP, month==NOV) && day > 30))
        return false; 

    return true; 
}

std::ostream& operator<<(std::ostream& os, const Date& obj) {
    if(obj.m_day)
        os << std::setw(2) << std::setfill('0') << obj.m_day << "/"; 
    if(obj.m_month)
        os << obj.m_month << "/"; 
    os << std::setw(4) << std::setfill('0') << obj.m_year; 

    return os; 
}

std::ostream& operator<<(std::ostream& os, const month_t& month) {
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
        case SEP: 
            os << "September"; 
            break; 
        case OCT: 
            os << "Octomber"; 
            break; 
        case NOV: 
            os << "November"; 
            break; 
        case DEC: 
            os << "December"; 
    }

    return os; 
}