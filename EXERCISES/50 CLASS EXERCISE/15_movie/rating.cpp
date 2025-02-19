#include <iostream> 

#include "rating.hpp" 

Rating::Rating(
	float obtained_review, 
	float max_review, 
	
	float total_review_count, 
	amount_unit_t count_unit 	
) : 
	m_obtained_review(obtained_review), 
	m_max_review(max_review), 
	m_total_review_count(total_review_count), 
	m_total_review_count_unit(count_unit) {
}

Rating::Rating(float obtained_review, float review_out_of, unsigned long total_reviews) : 
	m_obtained_review(obtained_review), 
	m_max_review(review_out_of), 
	m_total_review_count(total_reviews), 
	m_total_review_count_unit() {
}

std::ostream& operator<<(std::ostream& os, const Rating& obj) {
	os << obj.m_obtained_review << "/" << obj.m_max_review 
		<< " (" << obj.m_total_review_count << obj.m_total_review_count_unit << ")"; 
		
	return os; 
}