#pragma once

#include <iostream>

class Date{
    public: 
        int m_day;
        int m_month;
        int m_year;

    public:
        Date(int day, int month, int year);

    friend std::ostream& operator<<(std::ostream& os, const Date& date_object);
};