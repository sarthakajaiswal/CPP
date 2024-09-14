#ifndef _DATE_HPP 
#define _DATE_HPP 

#include <iostream> 

enum month_t {
    JAN, 
    FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC
}; 

class Date {
    private: 
        unsigned short m_day; 
        unsigned short m_month; 
        unsigned short m_year; 

    public: 
        Date(unsigned short year); 
        Date(month_t month, unsigned short year); 
        Date(unsigned short day, month_t month, unsigned short year);

        static bool is_leap_year(unsigned short year); 
        static bool is_date_valid(unsigned short day, month_t month, unsigned short year);  

        friend std::ostream& operator<<(std::ostream& os, const Date& obj);  
}; 

std::ostream& operator<<(std::ostream& os, const month_t& month); 

#endif /* _DATE_HPP */