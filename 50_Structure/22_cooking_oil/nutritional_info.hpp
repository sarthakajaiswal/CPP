#ifndef _NUTRITIONAL_INFO_HPP 
#define _NUTRITIONAL_INFO_HPP 

#include <iostream> 
#include <vector> 

#include "weight.hpp" 
#include "energy.hpp" 
#include "units.hpp" 
#include "additional_nutritions_info.hpp"

class NutritionalInfo {
    private: 
        Weight m_base_weight_of_oil_for_nutritional_info;

        Energy m_energy_per_base_weight_of_oil; 
        Weight m_protein_per_base_weight_of_oil; 
        Weight m_cholesterol_per_base_weight_of_oil; 
        Weight m_fat_per_base_weight_of_oil; 
        Weight m_saturated_fatty_acid_per_base_weight_of_oil; 
        Weight m_unsaturated_fatty_acid_per_base_weight_of_oil; 
        Weight m_trans_fatty_acid_per_base_weight_of_oil; 

        std::vector<AdditionalNutritionInfo> m_additional_nutritions; 

    public: 
        NutritionalInfo (
            double per_weight_of_oil, weight_unit_t per_weight_of_oil_unit, 
            
            double energy_per_oil_weight, energy_unit_t energy_per_oil_weight_unit, 
            double protein_per_oil_weight, weight_unit_t protein_per_oil_weight_unit, 
            double cholesterol_per_oil_weight, weight_unit_t cholesterol_per_oil_weight_unit, 
            double fat_per_oil_weight, weight_unit_t fat_per_oil_weight_unit, 
            double saturated_fatty_acid_per_oil_weight, weight_unit_t saturated_fatty_acid_per_oil_weight_unit, 
            double unsaturated_fatty_acid_per_oil_weight, weight_unit_t unsaturated_faty_acid_per_oil_weight, 
            double trans_fatty_acid_per_oil_weight, weight_unit_t trans_fatty_acid_per_oil_weight_unit   

            // std::vector<std::tuple<std::string, std::string, double, weight_unit_t>> additional_nutritions 
        ); 

        friend std::ostream& operator<<(std::ostream& os, const NutritionalInfo& obj); 
}; 

#endif 