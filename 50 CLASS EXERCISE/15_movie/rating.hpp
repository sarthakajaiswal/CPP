#ifndef _RATING_HPP 
#define _RATING_HPP 

#include <iostream> 
#include "units.hpp" 

class Rating {
	private: 
		float m_obtained_review; 
		float m_max_review; 
		
		double m_total_review_count;  
		amount_unit_t m_total_review_count_unit; 

	public: 
		Rating(float obtained_review, float review_out_of, unsigned long total_reviews); 
		Rating(float obtained_review, float review_out_of, float total_review_count, amount_unit_t count_unit);

		friend std::ostream& operator<<(std::ostream& os, const Rating& obj); 
}; 

#endif