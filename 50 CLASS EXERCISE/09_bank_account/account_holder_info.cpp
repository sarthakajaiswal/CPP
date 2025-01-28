#include <iostream>
#include <cstring>
#include "account_holder_info.hpp" 

AccountHolderInfo::AccountHolderInfo(
	std::string name, 
	Date dob, 
	gender_t gender, 
	std::string city,
	std::string district, 
	unsigned int pin_code, 
	std::string state
	) : m_name(name), 
		m_dob(dob), 
		m_gender(gender), 
		m_address(city, district, pin_code, state) {
		
		}

std::ostream& operator<<(std::ostream& os, const AccountHolderInfo& obj) {
	os << "Name: " << obj.m_name << std::endl 
		<< "DOB: " << obj.m_dob << std::endl 
		<< "Gender: " << obj.m_gender << std::endl 
		<< "Address: " << obj.m_address; 
	
	return os; 
}

std::ostream& operator<<(std::ostream& os, const gender_t gender) {
	switch(gender) {
		case 0: 
			os << "Female"; 
			break; 
			
		case 1: 
			os << "Male"; 
			break; 
			
		case 2: 
			os << "Transgender"; 		
	}
	
	return os; 
}