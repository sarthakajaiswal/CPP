#ifndef _CAST_HPP 
#define _CAST_HPP 

#include <iostream> 

class Cast {
	private: 
		std::string m_actor; 
		std::string m_role; 
		std::string m_play_name; 

		void show_cast_without_play_name() const;

	public: 
		Cast(std::string actor, std::string role, std::string play_name);
		
		void show_cast_with_play_name() const; 

		friend std::ostream& operator<<(std::ostream& os, const Cast& obj); 
}; 

#endif 