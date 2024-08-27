#include <iostream>
#include <cstring>

#include "contact_info.hpp" 

ContactInfo::ContactInfo(
	unsigned long long telephone_number, 
	std::string email
) : m_telephone_number(telephone_number), 
	m_email(email) {
	
	} 
	
std::ostream& operator<<(std::ostream& os, const ContactInfo& obj) {
	if(obj.m_telephone_number > 0) 
		os << "tel - " << obj.m_telephone_number; 
	
	if(obj.m_email != "") 
		os << " email - " << obj.m_email; 
		
	return os; 
}