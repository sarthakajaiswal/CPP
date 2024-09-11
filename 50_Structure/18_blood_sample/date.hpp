#ifndef _DATE_HPP 
#define _DATE_HPP 

#include <iostream> 

typedef enum month {
    JAN=1, 
    FEB, MAR, APR, MAY, JUN, JUL, AUG, SEPT, OCT, NOV, DEC
}month_t;

class Date {
    private: 
        unsigned short m_day; 
        unsigned short m_month; 
        unsigned short m_year;

    public: 
        Date(unsigned short year); 
        Date(month_t month, unsigned short year);
        Date(unsigned short day, month_t month, unsigned short year);

        std::string get_month_string() const;
        static bool is_leap_year(unsigned short year); 

        friend std::ostream& operator<<(std::ostream& os, const Date& obj);    
};  

#endif