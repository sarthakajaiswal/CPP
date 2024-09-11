#ifndef _BLOOD_SAMPLE_HPP 
#define _BLOOD_SAMPLE_HPP 

#include <iostream> 
#include <cstring> 
#include <vector> 

#include "patient_info.hpp" 
#include "time.hpp" 
#include "date.hpp" 

typedef enum sample_tube {
    PURPLE = 0,   
    RED, YELLOW, SKY_BLUE, GREY 
}sample_tube_t; 

class BloodSample {
    private: 
        std::string m_referred_by;
        std::string m_sample_collected_at;

        std::vector <std::string> m_tests;   

        sample_tube_t m_sample_tube; 

        float m_sample_quantity_ml;
        PatientInfo m_patient_info; 
        Time m_collection_time; 
        Date m_collection_date;

    public: 
        BloodSample(
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
        ); 

        friend std::ostream& operator<<(std::ostream& os, const BloodSample& obj);    
}; 

std::ostream& operator<<(std::ostream& os, const sample_tube_t& sample_tube);

#endif 