#include <iostream>
#include <cstring>

#include "contact_info.hpp" 

ContactInfo::ContactInfo(
	unsigned long long contact, 
	std::string email
) : m_contact(contact), 
	m_email(email) {
	
	}
	
std::ostream& operator<<(std::ostream& os, const ContactInfo& obj) {
	if(obj.m_contact > 0)
		os << "tel - " << obj.m_contact; 
	
	if(obj.m_email != "")
		os << " mail - " << obj.m_email; 
		
	return os; 
}