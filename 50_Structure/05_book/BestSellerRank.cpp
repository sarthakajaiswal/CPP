#include <cstdio>
#include <string>
#include <iostream>
#include "BestSellerRank.hpp"

BestSellerRank::BestSellerRank(
    unsigned short rank,
    std::string category
) : m_best_seller_rank(rank),
    m_best_seller_category(category) {

}

std::ostream& operator<<(std::ostream& os, const BestSellerRank& object) {
    os << "#" << object.m_best_seller_rank << " in " << object.m_best_seller_category;

    return os;
}