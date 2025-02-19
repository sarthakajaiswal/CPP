#ifndef _AMOUNT_HPP 
#define _AMOUNT_HPP 

#include <iostream> 
#include "units.hpp" 

class Amount {
	private: 
		double m_amount; 
		multiplier_t m_amount_multiplier; 
		currency_t m_currency; 
	
	public: 
		Amount(double amount, multiplier_t amount_multiplier, currency_t currency);
		Amount(unsigned long amount, currency_t currency); 
		
		friend std::ostream& operator<<(std::ostream& os, const Amount& obj); 
}; 

#endif