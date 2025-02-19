#ifndef _CONTACT_INFO_HPP
#define _CONTACT_INFO_HPP 

#include <iostream>
#include <cstring> 

class ContactInfo {
	private: 
		unsigned long long m_contact;
		std::string m_email; 
		
	public: 
		ContactInfo(unsigned long long contact, std::string email); 
		
		friend std::ostream& operator<<(std::ostream& os, const ContactInfo& obj); 
}; 

#endif 