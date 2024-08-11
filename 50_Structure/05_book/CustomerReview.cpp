#include <cstdio>
#include "CustomerReview.hpp"

CustomerReview::CustomerReview(
    float review,
    unsigned long long number_of_reviews
) : m_review(review), 
    m_number_of_reviews(number_of_reviews) {

}