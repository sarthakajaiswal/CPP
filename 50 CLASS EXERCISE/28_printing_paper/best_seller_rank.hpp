#ifndef _BEST_SELLER_RANK_HPP 
#define _BEST_SELLER_RANK_HPP 

class BestSellerRank{
    private: 
        unsigned int m_rank; 
        std::string m_category; 

    public: 
        BestSellerRank(unsigned int rank, std::string category); 

        friend std::ostream& operator<<(std::ostream& os, const BestSellerRank& obj);  
}; 

#endif /* _BEST_SELLER_RANK_HPP */