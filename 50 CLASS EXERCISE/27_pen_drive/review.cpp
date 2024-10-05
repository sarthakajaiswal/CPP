#include <iostream> 
#include "review.hpp" 

Review::Review(float review_score, float max_review_value, unsigned long long review_count) : m_count(review_count) {
	if(review_score > max_review_value) {
		std::cout << "Invalid review values"; 
		m_review_score = m_max_review_value = 0.0;
		m_count = 0; 
	} 
	else {
		m_review_score = review_score; 
		m_max_review_value = max_review_value; 
		m_count = review_count; 
	} 
} 

std::ostream& operator<<(std::ostream& os, const Review& obj) {
	os << obj.m_review_score << "/" << obj.m_max_review_value << " (" << obj.m_count << ")"; 
	return os; 
} 