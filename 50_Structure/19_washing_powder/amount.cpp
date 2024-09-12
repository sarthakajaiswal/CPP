#include <iostream> 
#include "amount.hpp"

Amount::Amount(double amount, amount_multiplier_unit_t unit, currency_t currency) : 
    m_value(amount), m_unit(unit), m_currency(currency) {}

Amount::Amount(unsigned long value, currency_t currency) : 
    m_value(value), m_unit(ONES), m_currency(currency) {} 

std::ostream& operator<<(std::ostream& os, const Amount& obj) { 
    os << obj.m_currency << obj.m_value; 

    if(obj.m_unit != ONES) 
        os << " " << obj.m_unit;

    return os;  
}

std::ostream& operator<<(std::ostream& os, const currency_t& currency) {
    switch(currency) { 
        case DOLLAR: 
            os << "$"; 
            break; 
        case RUPEES: 
            os << "Rs"; 
    }

    return os; 
}