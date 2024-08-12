#pragma once

#include <cstdio>
#include <iostream>

class CustomerReview {
    private: 
        float m_review;
        unsigned long long m_number_of_reviews;
    
    public: 
        CustomerReview(float revire, unsigned long long number_of_reviews);
    friend std::ostream& operator<<(std::ostream& os, const CustomerReview& review_object);
};