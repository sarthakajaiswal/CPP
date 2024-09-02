#ifndef _SONG_HPP
#define _SONG_HPP 

#include <iostream>
#include <cstring> 
#include <vector> 

#include "time.hpp" 
#include "date.hpp" 
#include "song_source.hpp" 
#include "production_info.hpp"

class Song {
	private: 
		std::string m_name; 
		std::string m_genre; 
		std::string m_language; 
		
		Time m_duration; 
		SongSource m_source; 
		Date m_release_date; 
		ProductionInfo m_production; 
		
	public: 
		Song(
			std::string name, 
			std::string genre, 
			std::string language, 

			unsigned short duration_minutes, 
			unsigned short duration_seconds, 

			std::string composer, 
			std::string director, 
			std::vector<std::string> singers, 
			std::string lyricist, 
			std::string company, 
			
			unsigned short release_day, 
			month_t release_month, 
			unsigned short release_year, 

			source_t source_type, 
			std::string source_name 
		); 

		friend std::ostream& operator<<(std::ostream& os, const Song& obj); 
}; 

#endif 