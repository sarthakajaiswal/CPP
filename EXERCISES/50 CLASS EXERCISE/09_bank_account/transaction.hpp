#ifndef _TRANSACTION_HPP
#define _TRANSACTION_HPP

#include <iostream>
#include <cstring> 

#include "date.hpp" 

typedef enum credit_or_debit {
	DEPOSIT=0, 
	WITHDRAWL
}transaction_t; 

class Transaction {
	private: 
		Date m_date; 
		transaction_t m_type; 
		unsigned long long m_amount_inr; 
		std::string m_description; 
	
	public: 
		Transaction(
			Date transaction_date, 
			transaction_t type, 
			unsigned long long transaction_amount, 
			std::string transaction_description
		); 
		
		friend std::ostream& operator<<(std::ostream& os, const Transaction& obj); 
}; 

std::ostream& operator<<(std::ostream& os, const transaction_t& obj); 

#endif 