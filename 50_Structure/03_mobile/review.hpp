#ifndef _REVIEW_HPP
#define _REVIEW_HPP

class Review {
	private: 
		float m_review;
		unsigned long long m_total_reviews; 
		
	public: 
		Review(float review, unsigned long long total_reviews);
		
		friend std::ostream& operator<<(std::ostream& os, const Review& obj); 
}; 

#endif