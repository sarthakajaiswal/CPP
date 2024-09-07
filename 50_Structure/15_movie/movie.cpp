#include <iostream> 

#include "movie.hpp" 

Movie::Movie(
	std::string title, 
	std::vector <std::string> directors, 
	std::vector <std::string> producers, 
	std::vector <std::string> production_companies, 
	
	std::vector <std::string> countries, 
	
	std::vector<std::string> genres, 
	
	unsigned short release_day, 
	month_t release_month, 
	unsigned short release_year, 
	
	unsigned int play_time, 
	duration_unit_t play_time_unit, 
	
	float budget, 
	amount_unit_t budget_multiple_unit, 
	float box_office_collection,
	amount_unit_t collection_multiple_unit,  
	currency_t currency, 
	
	float obtained_rating, 
	float rating_max_value, 
	float total_rating_count, 
	amount_unit_t rating_count_unit
) : 
	m_title(title), 
	m_directors(directors), 
	m_producers(producers), 
	m_production_companies(production_companies), 
	m_countries(countries), 
	
	m_genres(genres), 
	
	m_release_date(release_day, release_month, release_year), 
	m_runtime(play_time, play_time_unit), 
	m_rating(obtained_rating, rating_max_value, total_rating_count, rating_count_unit), 
	m_budget(budget, budget_multiple_unit, currency), 
	m_box_office(box_office_collection, collection_multiple_unit, currency) {
	
	}
	
std::ostream& operator<<(std::ostream& os, const Movie& obj) {
	os << "-----MOVIE INFORMATION-----" << std::endl 
		<< "Title: " << obj.m_title << std::endl 
		<< "Release Date: " << obj.m_release_date << std::endl 
		<< "Director: " << obj.m_directors << std::endl 
		<< "Producer: " << obj.m_producers << std::endl 
		<< "Production Company: " << obj.m_production_companies << std::endl 
		<< "Genre: " << obj.m_genres << std::endl 
		<< "Country: " << obj.m_countries << std::endl 
		<< "Duration: " << obj.m_runtime << std::endl 
		<< "Budget: " << obj.m_budget << std::endl 
		<< "Box office collection: " << obj.m_box_office << std::endl 
		<< "Rating: " << obj.m_rating << std::endl; 
	
	return os; 
}

std::ostream& operator<<(std::ostream& os, const std::vector<std::string>& vec) {
	unsigned int i; 
	unsigned int size; 

	size = vec.size(); 
	i=0; 
	while(i<size) {
		os << vec[i]; 
		if(i < size-1)
			os << ", "; 

		i++; 
	}

	return os; 
}