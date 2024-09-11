#ifndef _PATIENT_INFO_HPP 
#define _PATIENT_INFO_HPP  

#include <iostream> 
#include <cstring> 

typedef enum gender {
    M=0, F, TRANS 
}gender_t; 

typedef enum patient_meal_condition {
    POSTMEAL=0, 
    PREMEAL
}patient_meal_condition_t;

typedef enum age_unit {
    YEARS=0, 
    MONTHS, DAYS
}age_unit_t; 

class PatientInfo{
    private: 
        std::string m_name;
        std::string m_address;
 
        unsigned short m_age;
        age_unit_t m_age_unit; 
        gender_t m_gender;  
        patient_meal_condition_t m_patient_meal_at_time_of_sample_collection; 

    public: 
        PatientInfo(
            std::string name, 

            unsigned short age, 
            age_unit_t age_unit, 

            gender_t gender, 
            std::string address, 
            patient_meal_condition_t m_patien_meal_condition_at_time_of_sample_collection
        ); 

        patient_meal_condition_t get_patient_meal_condition() const; 

        friend std::ostream& operator<<(std::ostream& os, const PatientInfo& obj);
}; 

std::ostream& operator<<(std::ostream& os, const gender_t& gender); 
std::ostream& operator<<(std::ostream& os, const patient_meal_condition_t& patient_meal_condition); 
std::ostream& operator<<(std::ostream& os, const age_unit_t& age_unit); 

#endif 