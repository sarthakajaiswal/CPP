#include <iostream> 
#include "best_seller_rank.hpp" 

BestSellerRank::BestSellerRank(unsigned int rank, std::string category) : m_rank(rank), m_category(category) {} 

std::ostream& operator<<(std::ostream& os, const BestSellerRank& obj) {
    os << "#" << obj.m_rank << " in " << obj.m_category; 
    return os; 
}