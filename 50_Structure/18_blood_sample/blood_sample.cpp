#include <iostream> 
#include <vector> 
#include <string> 
#include <iomanip> 

#include "blood_sample.hpp"
#include "vector_template.hpp" 

BloodSample::BloodSample(
    std::string patient_name, 
    unsigned short patient_age, 
    age_unit_t age_unit, 
    gender_t patient_gender, 
    patient_meal_condition_t patient_meal_condition_at_time_of_sample_collection, 
    std::string patient_address, 

    std::string referred_by, 
    std::string sample_collected_at, 
    std::vector <std::string> tests, 
    sample_tube_t sample_tube_type, 
    
    float sample_quantity_ml, 
    
    unsigned short collection_day, 
    month_t collection_month, 
    unsigned short collection_year, 
    
    unsigned short collection_hours, 
    unsigned short collection_minutes  
) : 
    m_patient_info(patient_name, patient_age, age_unit, patient_gender, patient_address, patient_meal_condition_at_time_of_sample_collection), 
    m_referred_by(referred_by), 
    m_sample_collected_at(sample_collected_at), 
    m_tests(tests), 
    m_sample_tube(sample_tube_type), 
    m_sample_quantity_ml(sample_quantity_ml), 
    m_collection_time(collection_hours, collection_minutes), 
    m_collection_date(collection_day, collection_month, collection_year) {} 

std::ostream& operator<<(std::ostream& os, const BloodSample& obj) {
    os << "Patient Details: " << std::endl << obj.m_patient_info << std::endl 
        << "Refferred by: " << obj.m_referred_by << std::endl 
        << "Tests: " << obj.m_tests << std::endl 
        << "Sample meal info: " << obj.m_patient_info.get_patient_meal_condition() << std::endl 
        << "Collection Date: " << obj.m_collection_date << std::endl 
        << "Collection time: " << obj.m_collection_time << std::endl 
        << "Sample collected at: " << obj.m_sample_collected_at << std::endl; 

    return os; 
}

std::ostream& operator<<(std::ostream& os, const sample_tube_t& sample_tube) {
    switch(sample_tube) {
        case RED: 
            os << "Red"; 
            break; 
        case SKY_BLUE: 
            os << "Sky Blue"; 
            break; 
        case GREY: 
            os << "Grey"; 
            break; 
        case YELLOW: 
            os << "Yellow"; 
            break; 
        case PURPLE: 
            os << "Purple"; 
    }

    return os; 
}  