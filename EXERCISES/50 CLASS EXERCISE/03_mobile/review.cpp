#include <iostream>
#include <string>
#include "review.hpp"

Review::Review(
	float review, 
	unsigned long long total_reviews
	) : m_review(review), 
		m_total_reviews(total_reviews) {
		
		}
		
std::ostream& operator<<(std::ostream& os, const Review& obj) {
	os << obj.m_review << " (" << obj.m_total_reviews << ")"; 
	
	return os; 
}