#include <iostream>

#include "book.hpp"

Book::Book(
    std::string title,
    std::initializer_list<std::string> authors,
    int book_edition,
    std::string language,
    int number_of_pages,
    short lower_age_limit,
    int price,

    std::string publisher_name,
    std::string publisher_city,
    std::string publisher_district, 
    std::string publisher_state, 
    std::string publisher_country,
    unsigned int publisher_pin_code,
    unsigned long long publisher_contact,
    std::string publisher_email,

    int day_of_publication, 
    int month_of_publication,
    int year_of_publication,

    float review,
    unsigned long long review_count,

    std::string isbn10,
    std::string isbn13,
    std::string country_origin,

    std::string dimention_unit,
    float length, 
    float width, 
    float height, 

    std::string weight_unit, 
    float weight,

    std::string packer_name, 
    std::string packer_city,
    std::string packer_district,
    std::string packer_state,
    std::string packer_country,
    unsigned int packer_pin_code,
    unsigned long long packer_contact,
    std::string packer_email,

    std::string generic_item_name,

    unsigned short best_seller_rank, 
    std::string best_seller_category 
    ) : m_title(title),
        m_authors(authors),
        m_language(language),
        m_country_origin(country_origin),
        m_generic_item_name(generic_item_name),
        m_isbn10(isbn10),
        m_isbn13(isbn13),

        m_edition(book_edition),
        m_number_of_pages(number_of_pages),
        m_price(price),
        m_age_lower_limit(lower_age_limit),

        m_publisher(publisher_name, publisher_city, publisher_district, publisher_state, publisher_country, publisher_pin_code, publisher_contact, publisher_email),
        m_date_of_publication(day_of_publication, month_of_publication, year_of_publication),
        m_weight(weight, weight_unit),
        m_dimention(length, width, height, dimention_unit),
        m_packer(packer_name, packer_city, packer_district, packer_state, packer_country, packer_pin_code, packer_contact, packer_email),
        m_best_seller_rank(best_seller_rank, best_seller_category),
        m_reviews(review, review_count) {

        }      