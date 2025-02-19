#include <iostream>
#include "Date.hpp"

Date::Date(
    unsigned short day, 
    unsigned short month, 
    unsigned short year
    ) : m_day(day), 
        m_month(month),
        m_year(year) {

    }

Date::Date(unsigned short month, unsigned short year) : 
    m_month(month),
    m_year(year),
    m_day(0) {

    }

std::ostream& operator<<(std::ostream& os, const Date& date) {
    if(date.m_day != 0)
        os << date.m_day << "/";
    os << date.m_month << "/" << date.m_year;

    return os;
}