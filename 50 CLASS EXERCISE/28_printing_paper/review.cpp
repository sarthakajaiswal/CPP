#include <iostream> 
#include "review.hpp" 

Review::Review(float user_review, float max_review_val, double review_count, multiplier_unit count_multiplier) : 
    m_user_review(user_review), m_max_review_value(max_review_val), m_count(review_count, count_multiplier) {} 

Review::Review(float user_review, float max_review_val, unsigned int review_count) : 
    m_user_review(user_review), m_max_review_value(max_review_val), m_count(review_count, ONES) {} 

std::ostream& operator<<(std::ostream& os, const Review& obj) {
    os << obj.m_user_review << "/" << obj.m_max_review_value << "(" << obj.m_count << ")"; 
    return os; 
}