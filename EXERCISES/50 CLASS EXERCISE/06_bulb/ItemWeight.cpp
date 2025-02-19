#include <iostream>
#include "ItemWeight.hpp"

ItemWeight::ItemWeight(float value, std::string unit) : 
    m_value(value),
    m_unit(unit) {

    }

std::ostream& operator<<(std::ostream& os, const ItemWeight& weight) {
    os << weight.m_value << " " << weight.m_unit;
    return os;
}