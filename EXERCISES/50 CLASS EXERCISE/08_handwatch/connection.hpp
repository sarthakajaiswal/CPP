#ifndef _CONNECTIVITY_HPP
#define _CONNECTIVITY_HPP

#include <iostream>
#include <string>

class Connection {
	private: 
		bool m_is_connectible;
		std::string m_connection_technology;
	public: 
		Connection(std::string connection_technology);
		friend std::ostream& operator<<(std::ostream& os, const Connection& obj);
};

#endif