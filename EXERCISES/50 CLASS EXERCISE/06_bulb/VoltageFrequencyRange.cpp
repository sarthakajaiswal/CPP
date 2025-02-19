#include <iostream>
#include "VoltageFrequencyRange.hpp"

VoltageFrequencyRange::VoltageFrequencyRange(
    float min_value,
    float max_value,
    std::string unit
    ) : m_min_val(min_value),
        m_max_val(max_value),
        m_unit(unit) {

}

std::ostream& operator<<(std::ostream& os, const VoltageFrequencyRange& range) {
    os << range.m_min_val
        << " to "
        << range.m_max_val
        << " "
        << range.m_unit;

    return os;
}