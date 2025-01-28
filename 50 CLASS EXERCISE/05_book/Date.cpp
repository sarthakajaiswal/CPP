#include <iostream>
#include <cstdio>

#include "Date.hpp"

Date::Date(int day, int month, int year) 
        : m_day(day), 
        m_month(month), 
        m_year(year) {

    }

std::ostream& operator<<(std::ostream& os, const Date& date_object) {
    os << date_object.m_day << "/"
        << date_object.m_month << "/"
        << date_object.m_year;

    return os;
}