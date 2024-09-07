#ifndef _AMOUNT_HPP 
#define _AMOUNT_HPP 

#include <iostream> 
#include "units.hpp" 

class Amount {
	private: 
		float m_amount;
		amount_unit_t m_amount_multiple_unit;  
		currency_t m_currency; 

	public: 
		Amount(float amount, amount_unit_t amount_multiple_unit, currency_t currency);

		friend std::ostream& operator<<(std::ostream& os, const Amount& obj); 
}; 

#endif