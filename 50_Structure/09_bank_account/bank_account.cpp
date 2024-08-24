#include "bank_account.hpp"

BankAccount::BankAccount(
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
    std::string branch_state , 
    std::string ifsc_code, 
	unsigned long long branch_contact, 
	std::string branch_email, 

    unsigned long long micr_code, 
    double balance_inr, 

    Date account_open_date, 

    transaction_t last_transaction_type, 
    unsigned long long last_transaction_amount, 
    Date last_transaction_date, 
	std::string last_transaction_description
) : 
    m_account_number(account_number),
    m_micr_code(micr_code), 
    m_balance_inr(balance_inr), 

    m_credit_score(credit_score), 

    m_branch(branch_city, branch_district, branch_pin_code, branch_state, ifsc_code, branch_contact, branch_email),  
    m_opened_date(account_open_date), 
    m_last_transaction(last_transaction_date, last_transaction_type, last_transaction_amount, last_transaction_description), 
    m_account_holder(account_holder_name, account_holder_birth_date, account_holder_gender, account_holder_city, account_holder_district, account_holder_pin_code, account_holder_state) {

    }

std::ostream& operator<<(std::ostream& os, const BankAccount& obj) {
    os << "Account Number : " << obj.m_account_number << std::endl
        << "Account Holder : " << obj.m_account_holder << std::endl
        << "Credit Score : " << obj.m_credit_score << std::endl 
        << "Branch Details : " << obj.m_branch << std::endl 
        << "MICR code : " << obj.m_micr_code << std::endl 
        << "Account opened on : " << obj.m_opened_date << std::endl 
        << "Last Transaction : " << obj.m_last_transaction << std::endl 
        << "Balance : " << obj.m_balance_inr << std::endl;

    return os;  
}

std::ostream& operator<<(std::ostream& os, const status_t& status) {
    switch(status) {
        case 0: 
            os << "Inactive"; 
            break; 
        
        case 1: 
            os << "Active"; 
            break; 
        
        case 2: 
            os << "Blocked"; 
            break; 
    }

    return os; 
}

std::ostream& operator<<(std::ostream& os, const account_t& account_type) { 
    switch(account_type) {
        case 0: 
            os << "savings"; 
            break; 
        case 1: 
            os << "Current"; 
            break; 
        case 2: 
            os << "Student"; 
            break; 
    }

    return os; 
}

std::ostream& operator<<(std::ostream& os, const gender_t& gender) { 
    switch(gender) {
        case 0: 
            os << "Female"; 
            break; 
        
        case 1: 
            os << "Male"; 
            break; 

        case 2: 
            os << "Transgender"; 
            break; 
    }

    return os; 
}