#pragma once

#include <iostream>
#include <vector>
#include <string>

#include "Date.hpp"
#include "Organisation.hpp"
#include "ItemWeight.hpp"
#include "CustomerReview.hpp"
#include "ItemDimention.hpp"
#include "BestSellerRank.hpp"

class Book {
    private:
        std::string m_title;
        std::vector <std::string> m_authors;
        std::string m_language;
        std::string m_country_origin;
        std::string m_generic_item_name;
        std::string m_isbn10;
        std::string m_isbn13;
        
        short m_edition;
        int m_number_of_pages;
        int m_price;
        short m_age_lower_limit;
        
        Organisation m_publisher;
        Date m_date_of_publication;
        CustomerReview m_reviews;
        ItemWeight m_weight;
        ItemDimention m_dimention;
        Organisation m_packer;
        BestSellerRank m_best_seller_rank; 

    public: 
        Book(
            std::string title,
            std::initializer_list<std::string> book_authors,
            int edition,
            std::string language,
            int number_of_pages,
            short age_lower_limit,
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
        );

    friend std::ostream& operator<<(std::ostream& os, const Book& object);
};  