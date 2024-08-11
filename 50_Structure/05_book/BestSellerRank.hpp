#pragma once

#include <cstdio>
#include <string>

class BestSellerRank {
    unsigned short m_best_seller_rank;
    std::string m_best_seller_category;

    public: 
        BestSellerRank(
            unsigned short rank,
            std::string category
        );
};