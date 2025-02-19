#ifndef _CONTACT_INFO_HPP
#define _CONTACT_INFO_HPP 

class ContactInfo {
	private: 
		unsigned long long m_telephone_number; 
		std::string m_email; 
		
	public: 
		ContactInfo(
			unsigned long long telephone, 
			std::string email
		); 
		
		friend std::ostream& operator<<(std::ostream& os, const ContactInfo& obj); 
}; 

#endif