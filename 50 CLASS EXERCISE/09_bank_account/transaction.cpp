#include "transaction.hpp" 

Transaction::Transaction(
	Date transaction_date, 
	transaction_t transaction_type,
	unsigned long long transaction_amount, 
	std::string description
	) : 
		m_date(transaction_date), 
		m_type(transaction_type), 
		m_amount_inr(transaction_amount), 
		m_description(description) {
			
		}
		
std::ostream& operator<<(std::ostream& os, const Transaction& obj) { 
	os << "Rs. " << obj.m_amount_inr << obj.m_type; 
	if(obj.m_description != "") 
		os << " (" << obj.m_description << ")"; 
	
	return os; 
}

std::ostream& operator<<(std::ostream& os, const transaction_t& obj) { 
	if(obj)
		os << "debited"; 
	else
		os << "credited"; 
	
	return os; 
}