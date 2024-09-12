#ifndef _DATE_HPP 
#define _DATE_HPP 

#include <iostream> 

typedef enum month {
    JAN = 0,
    FEB, MAR, APR, MAY, JUNE, JULY, AUG, SEPT, OCT, NOV 
}month_t; 

class Date {
    private: 
        unsigned int m_day; 
        unsigned int m_month; 
        unsigned int m_year; 

    public: 
        Date(unsigned int day, month_t month, unsigned int year); 
        Date(month_t month, unsigned int year); 
        Date(unsigned int year); 

        std::string get_month_string() const; 

        static bool is_leap_year(unsigned int year); 

        friend std::ostream& operator<<(std::ostream& os, const Date& obj);  
}; 

#endif /* _DATE_HPP */