#ifndef _CONTENT_INFO_HPP 
#define _CONTENT_INFO_HPP 

#include <iostream> 

#include "temperature.hpp" 
#include "volume.hpp" 
#include "weight.hpp" 

class ContentInfo {
    private: 
        Temperature m_temperature; 
        Volume m_volume; 
        Weight m_weight; 

    public: 
        ContentInfo(
            double temperature_value, temperature_unit_t temperature_unit, 
            double volume_value, volume_unit_t volume_unit, 
            double weight_value, weight_unit_t weight_unit
        ); 

        friend std::ostream& operator<<(std::ostream& os, const ContentInfo& obj); 
}; 

#endif /* _CONTENT_INFO_HPP */