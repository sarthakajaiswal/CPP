#include <cstdio>
#include <string>

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