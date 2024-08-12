#include <cstdio>
#include "CustomerReview.hpp"

CustomerReview::CustomerReview(
    float review,
    unsigned long long number_of_reviews
) : m_review(review), 
    m_number_of_reviews(number_of_reviews) {

}

std::ostream& operator<<(std::ostream& os, const CustomerReview& review_object) {
    os << review_object.m_review << "(" << review_object.m_number_of_reviews << ")";
    return os;
}