#ifndef _TIME_HPP 
#define _TIME_HPP 

#include <iostream> 

class Time {
    private: 
        unsigned short m_hours; 
        unsigned short m_minutes; 
        unsigned short m_seconds; 

    public: 
        Time(unsigned short hours, unsigned short minutes);
        Time(unsigned short hours, unsigned short minutes, unsigned short seconds); 

        friend std::ostream& operator<<(std::ostream& os, const Time& obj); 
}; 

#endif 