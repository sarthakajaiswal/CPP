#include "best_seller_rank.hpp" 

BestSellerRank::BestSellerRank(unsigned short rank, std::string category) : 
	m_rank(rank), m_category(category) {} 
	
std::ostream& operator<<(std::ostream& os, const BestSellerRank& obj) {
	if(obj.m_rank == 0) 
		return os; 
	
	os << "#" << obj.m_rank << " in " << obj.m_category; 
	return os; 
} 