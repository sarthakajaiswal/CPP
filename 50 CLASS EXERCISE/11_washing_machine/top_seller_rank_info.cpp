#include <iostream>
#include <cstring>

#include "top_seller_rank_info.hpp" 

TopSellerRankInfo::TopSellerRankInfo(
	unsigned short rank, 
	std::string category
) : m_rank(rank), 
	m_category(category) {
	
	}
	
std::ostream& operator<<(std::ostream& os, const TopSellerRankInfo& obj) {
	os << "#" << obj.m_rank << " in " << obj.m_category; 
	return os; 
}

std::ostream& operator<<(std::ostream& os, std::vector<TopSellerRankInfo>& vec) {
	unsigned int i; 
	unsigned int size; 

	i=0; 
	size = vec.size(); 
	while(i<size) {
		std::cout << vec[i]; 
		if(i<size-1)
			std::cout << ", "; 

		i++; 
	}

	return os; 
}