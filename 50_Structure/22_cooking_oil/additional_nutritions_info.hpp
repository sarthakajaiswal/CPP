#ifndef _ADDITIONAL_NUTRITIONS_HPP
#define _ADDITIONAL_NUTRITIONS_HPP 

#include <iostream> 
#include "units.hpp" 
#include "weight.hpp" 

class AdditionalNutritionInfo {
    private: 
        std::string m_nutrition_name;
        float m_nutrition_amount; 
        std::string m_nutrition_amount_unit; 

        Weight m_base_weight_of_oil; 

    public: 
        AdditionalNutritionInfo(
            std::string nutrition_name,  
            float nutrition_amount, 
            std::string nutrition_unit, 

            double per_oil_weight, 
            weight_unit_t per_oil_weight_unit  
        ); 

        friend std::ostream& operator<<(std::ostream& os, const AdditionalNutritionInfo& obj); 
}; 

#endif /* _NUTRITIONAL_NUTRITIONS_INFO */