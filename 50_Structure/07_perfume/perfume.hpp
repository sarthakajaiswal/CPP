#ifndef _PERFUME_HPP
#define _PERFUME_HPP

#include <iostream>
#include <string>
#include <vector>

#include "Date.hpp"
#include "Organization.hpp"

class Perfume{
    private: 
        std::string m_name;
        std::string m_brand;

        std::vector<std::string> m_contents;

        unsigned int m_quantity_ml;
        unsigned int m_price_inr;

        Date m_manufacture_date;
        Date m_expiry_date;

        Organization m_manufacturer;
        Organization m_marketer;
        Organization m_customer_care;

    public: 
        Perfume(
            std::string name,
            std::string brand,
            unsigned int quantity_ml,
            unsigned int price_inr,

            unsigned short manufactured_month,
            unsigned short manufactured_year,
            unsigned short expiry_month,
            unsigned short expiry_year,

            std::string manufacturer_name,
            std::string manufacturer_address_line1,
            std::string manufacturer_city,
            std::string manufacturer_district,
            unsigned int manufacturer_pin_code,
            std::string manufacturer_state, 
            std::string manufacturer_country,

            std::string marketer_name,
            std::string marketer_address_line1,
            std::string marketer_city,
            std::string marketer_district,
            unsigned int marketer_pin_code,
            std::string marketer_state,
            std::string maketer_country,

            std::string customer_care_name,
            unsigned long long customer_care_contact,
            std::string customer_care_email,
            std::string customer_care_address_line1,
            std::string customer_care_city,
            std::string customer_care_district,
            unsigned int customer_care_pin_code,
            std::string customer_care_state,
            std::string customer_care_country
        );

        void set_perfume_contents(const std::vector<std::string>& contents);

        friend std::ostream& operator<<(std::ostream& os, const Perfume& my_perfume);
};

std::ostream& operator<<(std::ostream& os, const std::vector<std::string>& vec);

#endif