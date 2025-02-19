#include <iostream> 
#include <cstring> 
#include "composition.hpp" 
#include "units.hpp" 

Composition::Composition(
    std::string component_name, 
    double composition_percent, 
    double composition_error_percent
) {
    if(composition_percent < 0) {
        std::cout << "Composition percent can't be negative"; 
        m_composition_percent = 0.0;
        m_error_percent = 0.0;  
        m_component_name = component_name; 
    }
    else {
        m_composition_percent = composition_percent;
        m_error_percent = composition_error_percent;  
        m_component_name = component_name; 
    }        
}

std::ostream& operator<<(std::ostream& os, const Composition& obj) {
    os << obj.m_composition_percent << "% +- " << obj.m_error_percent << "%" << obj.m_component_name; 

    return os; 
}