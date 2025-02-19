#include <cstdio>
#include <string>
#include <iostream>

#include "ItemDimention.hpp"

ItemDimention::ItemDimention(
    float length,
    float breadth, 
    float height, 
    std::string unit
) : m_length(length),
    m_breadth(breadth),
    m_height(height),
    m_unit(unit) {

}

std::ostream& operator<<(std::ostream& os, const ItemDimention& dimention) {
    os << dimention.m_length << dimention.m_unit << "*"
        << dimention.m_breadth << dimention.m_unit << "*"
        << dimention.m_height << dimention.m_unit;

    return os;
}