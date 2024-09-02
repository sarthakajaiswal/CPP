#ifndef _PRODUCTION_HPP
#define _PRODUCTION_HPP 

class ProductionInfo {
	private: 
		std::string m_composer; 
		std::string m_lyricist; 
		std::string m_company; 
		std::string m_director; 
		std::vector<std::string> m_singers; 
		
	public: 
		ProductionInfo(
			std::vector<std::string> singers,
			std::string composer, 
			std::string director, 
			std::string lyricist, 
			std::string company 
		); 
		
		friend std::ostream& operator<<(std::ostream& os, const ProductionInfo& obj); 
}; 

std::ostream& operator<<(std::ostream& os, const std::vector<std::string>& vec); 

#endif