#include <iostream> 
#include "nutritional_info.hpp" 

NutritionalInfo::NutritionalInfo(
    double base_weight_of_oil_for_nutritional_info, 
    weight_unit_t oil_weight_unit, 

    double energy_per_base_weight_of_oil, 
    energy_unit_t energy_unit, 

    double carbohydrate_protein_weight_per_base_weight_of_oil, 
    weight_unit_t carbohydrate_protein_weight_unit, 

    double cholesterol_weight_per_base_weight_of_oil, 
    weight_unit_t cholesterol_weight_unit, 

    double fat_weight_per_base_weight_of_oil, 
    weight_unit_t fat_weight_unit, 

    double saturated_fatty_acid_weight_per_base_weight_of_oil, 
    weight_unit_t saturated_fatty_acid_weight_unit, 

    double unsaturated_fatty_acid_weight_per_base_weight_of_oil, 
    weight_unit_t unsaturated_fatty_acid_weight_unit, 

    double trans_fatty_acid_weight_per_base_weight_of_oil, 
    weight_unit_t trans_fatty_acid_weight_unit  

    // std::vector<std::tuple<std::string, std::string, double, weight_unit_t>> additional_nutritions
) : 
    m_base_weight_of_oil_for_nutritional_info(
        base_weight_of_oil_for_nutritional_info, 
        oil_weight_unit 
    ), 
    m_energy_per_base_weight_of_oil(energy_per_base_weight_of_oil, energy_unit), 
    m_protein_per_base_weight_of_oil(carbohydrate_protein_weight_per_base_weight_of_oil, carbohydrate_protein_weight_unit), 
    m_cholesterol_per_base_weight_of_oil(cholesterol_weight_per_base_weight_of_oil, cholesterol_weight_unit), 
    m_fat_per_base_weight_of_oil(fat_weight_per_base_weight_of_oil, fat_weight_unit), 
    m_saturated_fatty_acid_per_base_weight_of_oil(saturated_fatty_acid_weight_per_base_weight_of_oil, saturated_fatty_acid_weight_unit), 
    m_unsaturated_fatty_acid_per_base_weight_of_oil(unsaturated_fatty_acid_weight_per_base_weight_of_oil, unsaturated_fatty_acid_weight_unit), 
    m_trans_fatty_acid_per_base_weight_of_oil(trans_fatty_acid_weight_per_base_weight_of_oil, trans_fatty_acid_weight_unit)  
    // m_additional_nutritions(additional_nutritions) 
    {} 

std::ostream& operator<<(std::ostream& os, const NutritionalInfo& obj) {
    os << "(per " << obj.m_base_weight_of_oil_for_nutritional_info << " of oil)" << std::endl 
        << "Energy: " << obj.m_energy_per_base_weight_of_oil << std::endl 
        << "Carbohydrate Protein: " << obj.m_protein_per_base_weight_of_oil << std::endl 
        << "Cholesterol: " << obj.m_cholesterol_per_base_weight_of_oil << std::endl  
        << "Fat: " << obj.m_fat_per_base_weight_of_oil << std::endl 
        << "Saturated Fatty Acid: " << obj.m_saturated_fatty_acid_per_base_weight_of_oil << std::endl 
        << "Unsaturated Fatty Acid: " << obj.m_unsaturated_fatty_acid_per_base_weight_of_oil << std::endl 
        << "Trans Fatty Acid: " << obj.m_trans_fatty_acid_per_base_weight_of_oil; 
        // "Additional Nutrients: " << std::endl << obj.m_additiona;l_nutritions; 

    return os; 
} 