#ifndef _REVEIWS_HPP 
#define _REVIEWS_HPP 

#include <iostream> 

class Review{
	private: 
		float m_review_score; 
		float m_max_review_value; 
		unsigned long long m_count; 
		
	public: 
		Review(float review_score, float max_review_value, unsigned long long count); 
		
		friend std::ostream& operator<<(std::ostream& os, const Review& obj); 
}; 

#endif /* _REVIEWS_HPP */ 