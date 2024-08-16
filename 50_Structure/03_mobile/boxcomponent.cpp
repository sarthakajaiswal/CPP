#include <iostream>
#include <string>
#include "boxcomponent.hpp" 

BoxComponent::BoxComponent(std::string name, unsigned short quantity) : 
    m_name(name), 
    m_quantity(quantity) {

    }

std::ostream& operator<<(std::ostream& os, const BoxComponent& obj) {
    os << obj.m_name << " " << obj.m_quantity << "N"; 

    return os; 
}