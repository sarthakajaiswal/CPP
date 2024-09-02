#include <iostream>
#include <cstring> 

#include "time.hpp" 

Time::Time(
    unsigned short hours, 
    unsigned short minutes, 
    unsigned short seconds
) {
    if(hours < 0 || minutes < 0 || minutes > 59 || seconds < 0 || seconds > 59) {
        std::cout << "Invalid time provided, time set to 00::00::00";
        m_hours = m_minutes = m_seconds = 0; 
    } 
    else {
        m_seconds = seconds; 
        m_minutes = minutes;  
        m_hours = hours;
    } 
}

Time::Time(
    unsigned short minutes, 
    unsigned short seconds
) {
    if(minutes < 0 || seconds < 0) {
        std::cout << "Invalid time provided, time set to 00:00:00"; 
        m_hours = m_minutes = m_seconds = 0;
    }
    else {
        m_hours = minutes/60; 
        m_minutes = minutes%60 + seconds/60; 
        m_seconds = seconds%60; 
    }
}

std::ostream& operator<<(std::ostream& os, const Time& time) {
    
    if(time.m_hours > 0)
        os << time.m_hours << ":";
         
    if(time.m_minutes<9)
        os <<  "0"; 
    os << time.m_minutes; 

    if(time.m_seconds<9)
        os <<  ":0"; 
    else 
        os << ":"; 
    os << time.m_seconds; 

    return os; 
}