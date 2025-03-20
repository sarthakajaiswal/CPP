#ifndef _CUSTOMER_REVIEW_HPP
#define _CUSTOMER_REVIEW_HPP 

#include <iostream> 

class CustomerReview 
{
    private: 
        float fGainedReview; 
        float fMaximumReview; 
        unsigned long long ullNumberOfReviewers; 

    public: 
        CustomerReview() 
        {
            this->fGainedReview = 0.0f; 
            this->fMaximumReview = 5.0f; 
            this->ullNumberOfReviewers = 0; 
        } 

        void show() 
        {
            std::cout << fGainedReview << " / " << fMaximumReview 
                 << " (" << ullNumberOfReviewers << ')'; 
        }
}; 

#endif /* _CUSTOMER_REVIEW_HPP */