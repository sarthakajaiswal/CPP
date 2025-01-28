#include <iostream>
#include "ItemWeight.hpp"

ItemWeight::ItemWeight(float weight, std::string unit) 
        : m_weight(weight),
        m_unit(unit) {
            
        }

std::ostream& operator<<(std::ostream& os, const ItemWeight& weight) {
        os << weight.m_weight << weight.m_unit;
        return os;
}