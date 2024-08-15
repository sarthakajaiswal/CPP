#include <iostream>
#include <string>

#include "connection.hpp"

Connection::Connection(std::string connection_technology) 
	: m_connection_technology(connection_technology) {
		if(connection_technology == "") 
			m_is_connectible = false;
		else
			m_is_connectible = true;
	}

std::ostream& operator<<(std::ostream& os, const Connection& obj) {
	if(obj.m_is_connectible == false)
		os << "Not Connectable";
	else
		os << "using " << obj.m_connection_technology;
	
	return os;
}