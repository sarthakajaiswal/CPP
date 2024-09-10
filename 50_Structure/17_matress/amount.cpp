#include <iostream> 
#include "amount.hpp" 

Amount::Amount(
	double amount, 
	multiplier_t amount_multiplier, 
	currency_t currency
) : 
	m_amount(amount), 
	m_amount_multiplier(amount_multiplier), 
	m_currency(currency) {
}

Amount::Amount(unsigned long amount, currency_t currency) : 
	m_amount(amount), 
	m_amount_multiplier(ONES), 
	m_currency(currency) {
} 

std::ostream& operator<<(std::ostream& os, const Amount& obj) {
	os << obj.m_currency; 
	
	if(obj.m_amount_multiplier == ONES) 
		os << (unsigned long)obj.m_amount; 
	else
		os << obj.m_amount << " " << obj.m_amount_multiplier; 
		
	return os; 
}