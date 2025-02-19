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

std::ostream& operator<<(std::ostream& os, const Book& book_object) {
    os << "Book Information : " << std::endl
        << "Title: " << book_object.m_title << std::endl;
    
    os << "Author(s): ";
    int i=0;
    while(i<book_object.m_authors.size()) {
        std::cout << book_object.m_authors[i];
        ++i;
    }
    os << std::endl;
    os << "Language: " << book_object.m_language << std::endl
        << "ISBN10: " << book_object.m_isbn10 << std::endl
        << "ISBN13: " << book_object.m_isbn13 << std::endl
        << "Edition: " << book_object.m_edition << std::endl
        << "Date of Publication: " << book_object.m_date_of_publication << std::endl
        << "Number of Pages: " << book_object.m_number_of_pages << std::endl
        << "Reading Age: " << book_object.m_age_lower_limit << " and above" << std::endl
        << "Publisher: " << book_object.m_publisher << std::endl
        << "Packer: " << book_object.m_packer << std::endl
        << "Country Origin: " << book_object.m_country_origin << std::endl
        << "Product Generic Name: " << book_object.m_generic_item_name << std::endl
        << "Price : " << book_object.m_price << std::endl
        << "Best Seller Ranks: " << book_object.m_best_seller_rank << std::endl
        << "Review: " << book_object.m_reviews << std::endl;

    return os;
}