#ifndef _ACCOUNT_HOLDER_INFO
#define _ACCOUNT_HOLDER_INFO

#include <iostream>
#include <cstring> 

#include "date.hpp" 
#include "address.hpp" 

typedef enum gender_t {
	F = 0, 
	M, 
	THIRD
}gender_t; 

class AccountHolderInfo {
	private: 
		std::string m_name; 
		Date m_dob; 
		gender_t m_gender; 
		Address m_address; 
	
	public: 
		AccountHolderInfo(
			std::string name, 
			Date dob, 
			gender_t gender, 
			std::string city, 
			std::string district, 
			unsigned int pin_code, 
			std::string state
		); 
		
		friend std::ostream& operator<<(std::ostream& os, const AccountHolderInfo& obj); 
}; 

std::ostream& operator<<(std::ostream& os, const gender_t& gender); 

#endif