#ifndef _BEST_SELLER_RANK 
#define _BEST_SELLER_RANK 

#include <iostream> 

class BestSellerRank{
	private: 
		unsigned short m_rank; 
		std::string m_category; 
		
	public: 
		BestSellerRank(unsigned short rank, std::string category); 
		
		friend std::ostream& operator<<(std::ostream& os, const BestSellerRank& obj); 
}; 

#endif /* _BEST_SELLER_RANK */ 