#include <iostream> 

#include "amount.hpp" 
#include "units.hpp" 

Amount::Amount(float amount, amount_unit_t amount_multiple_unit, currency_t currency) : 
	m_amount(amount), 
	m_currency(currency), 
	m_amount_multiple_unit(amount_multiple_unit) {
}

std::ostream& operator<<(std::ostream& os, const Amount& obj) {
	os << obj.m_currency << obj.m_amount << " " << obj.m_amount_multiple_unit; 
	return os; 
} 