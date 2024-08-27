#include <iostream>
#include <cstring>

#include "review_info.hpp"

ReviewInfo::ReviewInfo(
	float review, 
	unsigned short review_max_value, 
	unsigned long long total_reviews
) : m_review(review), 
	m_review_max_val(review_max_value),
	m_total_number_of_reviews(total_reviews) {
	
	}

std::ostream& operator<<(std::ostream& os, const ReviewInfo& obj) {
	os << obj.m_review << " out of " << obj.m_review_max_val 
		<< " (" << obj.m_total_number_of_reviews << ")"; 
		
	return os; 
}