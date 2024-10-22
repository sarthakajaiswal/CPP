#ifndef _REVIEW_HPP 
#define _REVIEW_HPP 

#include <iostream> 
#include "count.hpp" 

class Review{
    private: 
        float m_user_review; 
        float m_max_review_value; 
        Count m_count; 

    public: 
        Review(float user_review, float max_review_val, double review_count, multiplier_unit count_multiplier); 
        Review(float user_review, float max_review_val, unsigned int review_count); 

        friend std::ostream& operator<<(std::ostream& os, const Review& obj); 
}; 

#endif /* _REVIEW_HPP */