#include <cstdio>
#include <string>
#include "BestSellerRank.hpp"

BestSellerRank::BestSellerRank(
    unsigned short rank,
    std::string category
) : m_best_seller_rank(rank),
    m_best_seller_category(category) {

}