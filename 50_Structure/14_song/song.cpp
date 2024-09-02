#include <iostream>
#include <cstring> 
#include <vector> 

#include "song.hpp" 

Song::Song(
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
) : m_name(name), 
    m_genre(genre), 
    m_language(language), 
    m_duration(duration_minutes, duration_seconds),
    m_source(source_type, source_name),  
    m_release_date(release_day, release_month, release_year), 
    m_production(singers, composer, director, lyricist, company) {

    }

std::ostream& operator<<(std::ostream& os, const Song& obj) {
    os << "-----SONG INFOMATION-----" << std::endl 
        << "Title: " << obj.m_name << std::endl 
        << "Movie/Album: " << obj.m_source << std::endl 
        << "Language: " << obj.m_language << std::endl 
        << "Genre: " << obj.m_genre << std::endl 
        << "Duration: " << obj.m_duration << std::endl 
        << obj.m_production << std::endl
        << "Release Date: " << obj.m_release_date << std::endl; 

        return os; 
}