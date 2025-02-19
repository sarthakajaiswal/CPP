#include <iostream> 
#include <iomanip> 
#include "time.hpp" 

Time::Time(unsigned short hours, unsigned short minutes) {
    if(minutes > 59) {
        hours = hours + minutes/60; 
        minutes = minutes % 60; 
    }
    if(hours > 24) 
        hours = hours%24;

    m_hours = hours; 
    m_minutes = minutes;  
    m_seconds = 0; 
} 

Time::Time(unsigned short hours, unsigned short minutes, unsigned short seconds) {
    if(seconds > 59) {
        minutes = minutes + seconds/60; 
        seconds = seconds%60; 
    }
    if(minutes > 59) {
        hours = hours + minutes/60; 
        minutes = minutes%60; 
    }
    if(hours > 24) 
        hours = hours%24;

    m_hours = hours; 
    m_minutes = minutes; 
    m_seconds = seconds;  
}

std::ostream& operator<<(std::ostream& os, const Time& obj) {
    os << std::setw(2) << std::setfill('0') << obj.m_hours << ":"
         << std::setw(2) << std::setfill('0') << obj.m_minutes;  
    if(obj.m_seconds != 0)
        os << ":" << std::setw(2) << std::setfill('0') << obj.m_seconds; 

    return os; 
}
