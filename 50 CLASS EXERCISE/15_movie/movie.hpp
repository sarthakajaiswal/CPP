#ifndef _MOVIE_HPP 
#define _MOVIE_HPP 

#include <iostream> 
#include <vector> 

#include "units.hpp" 
#include "date.hpp"
#include "duration.hpp" 
#include "amount.hpp" 
#include "cast.hpp" 
#include "rating.hpp" 

class Movie {
    private: 
        std::string m_title; 

        std::vector <std::string> m_directors; 
        std::vector <std::string> m_producers; 
        std::vector <std::string> m_production_companies; 

        std::vector <std::string> m_countries; 
        std::vector <std::string> m_genres; 

        Date m_release_date; 
        Duration m_runtime; 
        Rating m_rating; 
        Amount m_budget; 
        Amount m_box_office; 

       // std::vector<Cast> m_casts;  

    public: 
        Movie(
            std::string title,  
            std::vector<std::string> directors, 
            std::vector <std::string> producers, 
            std::vector <std::string> production_companies, 

            std::vector <std::string> countries, 

            std::vector<std::string> genres, 

            unsigned short day, 
            month_t month, 
            unsigned short year, 

            unsigned int duration, 
            duration_unit_t duration_unit, 

            float budget, 
            amount_unit_t budget_multiple_unit, 
            float box_office_colection,
            amount_unit_t collection_mulltiple_unit, 
            currency_t amount_unit, 

            float obtained_rating, 
            float rating_max_value, 
            float total_rating_count, 
            amount_unit_t rating_count_unit
        ); 
		
		friend std::ostream& operator<<(std::ostream& os, const Movie& obj); 
}; 

std::ostream& operator<<(std::ostream& os, const std::vector<std::string>& vec); 

#endif