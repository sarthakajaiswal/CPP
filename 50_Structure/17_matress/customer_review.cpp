#include <iostream> 
#include "customer_review.hpp" 

CustomerReview::CustomerReview(
	float customer_review, 
	float maximum_review_value, 
	double total_review_count, 
	multiplier_t review_count_multiplier
) : 
	m_customer_review(customer_review), 
	m_maximum_review_value(maximum_review_value),
	m_review_count(total_review_count), 
	m_count_multiplier(review_count_multiplier) {
}

CustomerReview::CustomerReview(
	float customer_review, 
	float maximum_review_value, 
	unsigned long total_review_count
) : 
	m_customer_review(customer_review), 
	m_maximum_review_value(maximum_review_value), 
	m_review_count(total_review_count),
	m_count_multiplier(ONES) {} 
	
std::ostream& operator<<(std::ostream& os, const CustomerReview& obj) {
	os << obj.m_customer_review << "/" << obj.m_maximum_review_value; 
	
	if(obj.m_count_multiplier == ONES)
		os << " (" << (unsigned long)obj.m_review_count << ")";
	else	
		os << " (" << obj.m_review_count << obj.m_count_multiplier << ")"; 

	return os; 
}