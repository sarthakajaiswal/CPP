#ifndef _BEST_SELLER_RANK_HPP
#define _BEST_SELLER_RANK_HPP 

class BestSellerRank 
{
    private: 
        int iRank; 
        std::string strCategory; 
    
    public: 
        BestSellerRank(int iRank, std::string strCategory) 
        {
            this->iRank = iRank; 
            this->strCategory = strCategory; 
        } 

        void show() 
        {
            std::cout << '#' << iRank << " in " << strCategory;  
        }
};

#endif /* _BEST_SELLER_RANK_HPP */