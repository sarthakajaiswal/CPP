#include <iostream> 
#include <cstring> 

#include "patient_info.hpp" 

PatientInfo::PatientInfo(
    std::string name, 
    unsigned short age, 
    age_unit_t age_unit, 
    gender_t gender, 
    std::string address, 
    patient_meal_condition_t patient_meal_condition_at_time_of_sample_collection
) : 
    m_name(name), 
    m_age(age), 
    m_age_unit(age_unit), 
    m_address(address), 
    m_gender(gender), 
    m_patient_meal_at_time_of_sample_collection(patient_meal_condition_at_time_of_sample_collection) {}

patient_meal_condition_t PatientInfo::get_patient_meal_condition() const{
    return this->m_patient_meal_at_time_of_sample_collection; 
}

std::ostream& operator<<(std::ostream& os, const PatientInfo& obj) {
    os << "Name: " << obj.m_name << std::endl 
        << "Age: " << obj.m_age << " " << obj.m_age_unit
        << "\tGender: " << obj.m_gender << std::endl 
        << "Address: " << obj.m_address; 

    return os; 
}

std::ostream& operator<<(std::ostream& os, const patient_meal_condition_t& patient_meal_condition) {
    if(patient_meal_condition == PREMEAL) 
        std::cout << "Premeal"; 
    else 
        std::cout << "Postmeal";  

    return os; 
}

std::ostream& operator<<(std::ostream& os, const age_unit_t& age_unit) {
    switch(age_unit) {
        case YEARS: 
            os << "yrs."; 
            break; 
        case MONTHS: 
            os << "months"; 
            break; 
        case DAYS: 
            os << "days";
    }

    return os; 
}

std::ostream& operator<<(std::ostream& os, const gender_t& gender) {
    switch(gender) {
        case M: 
            os << "Male"; 
            break; 
        case F: 
            os << "Female"; 
            break; 
        case TRANS: 
            os << "Transgender"; 
    } 

    return os; 
}