#ifndef _TOP_SELLER_RANK_INFO
#define _TOP_SELLER_RANK_INFO 

#include <iostream>
#include <cstring>
#include <vector> 

class TopSellerRankInfo {
	private: 
		unsigned short m_rank;
		std::string m_category;

	public: 
		TopSellerRankInfo(
			unsigned short rank, 
			std::string category
		); 
		
		friend std::ostream& operator<<(std::ostream& os, const TopSellerRankInfo& obj); 
}; 

std::ostream& operator<<(std::ostream& os, const std::vector<TopSellerRankInfo>& vec); 

#endif