#include <iostream> 
#include "additional_nutritions_info.hpp" 

AdditionalNutritionInfo::AdditionalNutritionInfo(
    std::string nutrition_name, 
    float nutrition_amount, 
    std::string nutrition_amount_unit, 
    double base_weight_of_oil, 
    weight_unit_t base_weight_of_oil_unit 
) : 
    m_nutrition_name(nutrition_name), 
    m_nutrition_amount(nutrition_amount), 
    m_nutrition_amount_unit(nutrition_amount_unit), 
    m_base_weight_of_oil(base_weight_of_oil, base_weight_of_oil_unit) {}

std::ostream& operator<<(std::ostream& os, const AdditionalNutritionInfo& obj) {
    os << obj.m_nutrition_name << "-" 
        << obj.m_nutrition_amount << " " << obj.m_nutrition_amount_unit 
        << " per " << obj.m_base_weight_of_oil; 

    return os; 
}