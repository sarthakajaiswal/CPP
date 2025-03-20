#ifndef _DATE_HPP 
#define _DATE_HPP 

#include <iostream> 

class Date 
{
    private: 
        int day; 
        int month; 
        int year; 
    
    public: 
        Date() 
        {
            day = 1; 
            month = 1; 
            year = 1970; 
        }

        Date(int iInitDay, int iInitMonth, int iInitYear) 
        {
            day = iInitDay; 
            month = iInitMonth; 
            year = iInitYear; 
        }

        void show() const
        {
            std::cout << day << "/" << month << "/" << year; 
        }
}; 

#endif /* _DATE_HPP */