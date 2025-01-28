#ifndef _AMOUNT_HPP 
#define _AMOUNT_HPP 

#include <iostream> 
#include "units.hpp"

typedef enum currency_type {
    RUPEES=0, 
    DOLLAR
}currency_t; 

class Amount {
    private: 
        double m_value; 
        amount_multiplier_unit_t m_unit; 
        currency_t m_currency; 

    public: 
        Amount(double value, amount_multiplier_unit_t unit, currency_t currency); 
        Amount(unsigned long value, currency_t currency); 

        friend std::ostream& operator<<(std::ostream& os, const Amount& obj); 
}; 

std::ostream& operator<<(std::ostream& os, const Amount& obj); 

#endif /* _AMOUNT_HPP */