#ifndef _REVIEW_HPP
#define	_REVIEW_HPP

class ReviewInfo {
	private: 
		float m_review; 
		unsigned short m_review_max_val; 
		unsigned long long m_total_number_of_reviews; 
			
	public: 
		ReviewInfo(
			float review, 
			unsigned short review_max_value, 
			unsigned long long total_reviews
		); 
		
		friend std::ostream& operator<<(std::ostream& os, const ReviewInfo& obj); 
}; 

#endif