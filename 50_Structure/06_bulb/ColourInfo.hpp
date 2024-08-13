#include <cstdio>
#include <string>
#include <iostream>

#include "Temperature.hpp"

class ColourInfo {
    private:
        short m_red;
        short m_green;
        short m_blue;
        float m_opacity_percent;
        float m_brightness_lumens;
        Temperature m_temperature;
    public:
        int m_colour_value;

        ColourInfo(
            short red, 
            short green, 
            short blue, 
            float opacity, 
            float brightness_lumens, 
            float temperature_celcius
        );
        
        std::string get_hex_value_string() const;

    friend std::ostream& operator<<(std::ostream&, const ColourInfo& colour_info);
};