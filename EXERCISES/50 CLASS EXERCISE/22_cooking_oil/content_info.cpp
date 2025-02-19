#include <iostream> 
#include "content_info.hpp" 

ContentInfo::ContentInfo(
    double storage_temperature_value, 
    temperature_unit_t temperature_unit,

    double volume, 
    volume_unit_t volume_unit, 

    double weight, 
    weight_unit_t weight_unit 
) : 
    m_temperature(storage_temperature_value, temperature_unit), 
    m_volume(volume, volume_unit), 
    m_weight(weight, weight_unit) {} 

std::ostream& operator<<(std::ostream& os, const ContentInfo& obj) {
    os << obj.m_volume << " (" << obj.m_weight << ")" 
        << " at " << obj.m_temperature; 

    return os; 
}