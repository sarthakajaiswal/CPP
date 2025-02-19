#ifndef _DIMENTION_HPP 
#define _DIMENTION_HPP 

#include <iostream> 
#include "length.hpp" 
#include "units.hpp" 

enum dimention_format_t {
    L_W_H, L_W_D, 
    L_W,
    L, W, D, H
}; 

class Dimention{
    private: 
        Length m_dim_1; 
        Length m_dim_2; 
        Length m_dim_3; 
        dimention_format_t m_format; 

    public: 
        Dimention(float dim_1, float dim_2, float dim_3, length_unit unit, dimention_format_t format); 
        Dimention(float dim_1, float dim_2, length_unit unit, dimention_format_t format); 
        Dimention(float dim_1, length_unit unit, dimention_format_t format); 

        friend std::ostream& operator<<(std::ostream& os, const Dimention& obj); 
}; 

std::ostream& operator<<(std::ostream& os, const dimention_format_t& format); 

#endif /* _DIMENTION_HPP */