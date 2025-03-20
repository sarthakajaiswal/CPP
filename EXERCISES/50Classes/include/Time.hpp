#ifndef _TIME_HPP 
#define _TIME_HPP 

#include <iostream> 

class Time
{
    private: 
        int hours; 
        int minutes; 
        int seconds; 

    public: 
        Time() 
        {
            hours = 12; 
            minutes = 20; 
            seconds = 15; 
        } 

        Time(int InitHours, int InitMinutes, int InitSeconds) 
        {
            this->hours = InitHours; 
            this->minutes = InitMinutes; 
            this->seconds = InitSeconds; 
        }

        void show() const 
        {
            std::cout << hours << ":" << minutes << ":" << seconds; 
        }
}; 

#endif /* _TIME_HPP */