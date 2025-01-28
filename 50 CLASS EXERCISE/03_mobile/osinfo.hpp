#ifndef _OSINFO_HPP
#define _OSINFO_HPP

#include <iostream>
#include <string> 

class OsInfo { 
	private: 
		std::string m_os;
		std::string m_version;
		
	public: 
		OsInfo(std::string os, std::string version); 
		
		friend std::ostream& operator<<(std::ostream& os, const OsInfo& obj); 
};

#endif