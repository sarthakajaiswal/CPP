#include <iostream> 
#include "dimention.hpp" 

Dimention::Dimention(
    float length, 
    float width, 
    float height, 
    dimention_unit_t unit 
) {
    if(length < 0 || width < 0 || height < 0) {
        std::cout << "dimention can't be negative, dimention intialized to zero"; 
        m_length = m_width = m_height = 0; 
    }
    m_length = length;  
    m_width = width;  
    m_height = height;  
    m_unit = unit;  
}

Dimention::Dimention(float length, float width, dimention_unit_t unit) {
    if(length < 0 || width < 0) {
        std::cout << "dimention can't be negative, dimention intialized to zero"; 
        m_length = m_width = m_height = 0; 
    }
    m_length = length;  
    m_width = width;  
    m_height = 0.0;  
    m_unit = unit;  
}

std::ostream& operator<<(std::ostream& os, const Dimention& obj) {
    os << obj.m_length << obj.m_unit << " (L)"; 
    if(obj.m_width) 
        os << " * " << obj.m_width << obj.m_unit << " (W)";  
    if(obj.m_height) 
        os << " * " << obj.m_height << obj.m_unit << " (H)";

    return os;  
}