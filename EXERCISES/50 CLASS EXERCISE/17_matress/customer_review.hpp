#ifndef _CUSTOMER_REVIEW_HPP 
#define _CUSTOMER_REVIEW_HPP 

#include <iostream> 
#include "units.hpp" 

class CustomerReview {
	private: 
		float m_customer_review; 
		float m_maximum_review_value;
		double m_review_count; 
		multiplier_t m_count_multiplier; 
		
	public: 
		CustomerReview(
			float customer_review, 
			float maximum_review_value, 
			double review_count, 
			multiplier_t review_count_multiplier
		); 
		CustomerReview(
			float customer_review, 
			float maximun_review_value, 
			unsigned long review_count
		); 
		
		friend std::ostream& operator<<(std::ostream& os, const CustomerReview& obj); 
}; 

#endif 