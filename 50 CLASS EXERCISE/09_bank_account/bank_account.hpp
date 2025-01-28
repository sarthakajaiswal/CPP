#ifndef _BANK_ACCOUNT_HPP
#define _BANK_ACCOUNT_HPP

#include <iostream>
#include <cstring> 

#include "branch.hpp"
#include "date.hpp" 
#include "transaction.hpp" 
#include "account_holder_info.hpp" 

typedef enum status { 
    INACTIVE = 0, 
    ACTIVE, 
    BLOCKED
}status_t; 

typedef enum account_type {
    SAVINGS = 0, 
    CURRENT,
    STUDENT
}account_t;

std::ostream& operator<<(std::ostream& os, const status_t& status); 
std::ostream& operator<<(std::ostream& os, const account_t& account_type); 
std::ostream& operator<<(std::ostream& os, const gender_t& gender); 

class BankAccount {
    private: 
        unsigned long long m_account_number; 
        unsigned long long m_micr_code; 
        unsigned long long m_balance_inr; 

        float m_credit_score; 

        Branch m_branch; 
        Date m_opened_date; 
        Transaction m_last_transaction; 
        AccountHolderInfo m_account_holder;  

    public: 
        BankAccount(
            std::string account_holder_name,
            std::string account_holder_city, 
            std::string account_holder_district, 
            unsigned long long account_holder_pin_code, 
            std::string account_holder_state,  

            Date account_holder_birth_date, 
            gender_t account_holder_gender, 

            unsigned long long account_number,
            float credit_score, 

            account_t account_type, 
            status_t account_status,  
 
            std::string branch_city, 
            std::string branch_district,
            unsigned long long branch_pin_code,  
            std::string branch_state, 
            std::string ifsc_code, 
			unsigned long long branch_contact, 
			std::string branch_email, 

            unsigned long long micr_code, 
            double balance, 

            Date account_open_date,  

            transaction_t last_transaction_type, 
            unsigned long long last_transaction_amount, 
            Date last_transaction_date, 
			std::string last_transaction_description
        ); 

        friend std::ostream& operator<<(std::ostream& os, const BankAccount& obj); 
}; 

#endif