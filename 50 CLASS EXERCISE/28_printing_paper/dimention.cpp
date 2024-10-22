#include <iostream> 
#include "dimention.hpp" 

Dimention::Dimention(float dim_1, length_unit unit, dimention_format_t format) : 
    m_dim_1(dim_1, unit), m_dim_2(0, unit), m_dim_3(0, unit), m_format(format) {}  

Dimention::Dimention(float dim_1, float dim_2, length_unit unit, dimention_format_t format) : 
    m_dim_1(dim_1, unit), m_dim_2(dim_2, unit), m_dim_3(0, unit), m_format(format) {} 

Dimention::Dimention(float dim_1, float dim_2, float dim_3, length_unit unit, dimention_format_t format) : 
    m_dim_1(dim_1, unit), m_dim_2(dim_2, unit), m_dim_3(dim_3, unit), m_format(format) {} 

std::ostream& operator<<(std::ostream& os, const Dimention& obj) {
    os << obj.m_dim_1; 
    if(obj.m_format == L || obj.m_format == W || obj.m_format == H){
        os << "( " << obj.m_format << " )"; 
        return os; 
    } 
     
    os << " X " << obj.m_dim_2; 
    if(obj.m_format == L_W) {
        os << "( " << obj.m_format << " )"; 
        return os; 
    } 
    
    os << " X " << obj.m_dim_3 << " (" << obj.m_format << ")"; 
    return os;  
}

std::ostream& operator<<(std::ostream& os, const dimention_format_t& format) {
    switch(format) {
        case L: 
            os << "L"; 
            break; 
        case W: 
            os << "W"; 
            break; 
        case H: 
            os << "H"; 
            break; 
        case D: 
            os << "D"; 
            break; 
        case L_W: 
            os << "LxW"; 
            break; 
        case L_W_D: 
            os << "LxWxD"; 
            break; 
        case L_W_H: 
            os << "LxWxH"; 
            break; 
        default: 
            break; 
    }
    return os; 
}