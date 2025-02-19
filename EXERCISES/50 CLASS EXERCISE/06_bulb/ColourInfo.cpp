#include <iostream>
#include <string>

#include "ColourInfo.hpp"
#include "Temperature.hpp"

ColourInfo::ColourInfo(
        short red, 
        short green, 
        short blue, 
        float opacity, 
        float brightness_lumens, 
        float temperature_celcius
    ) : m_red(red),
        m_green(green),
        m_blue(blue),
        m_opacity_percent(opacity),
        m_brightness_lumens(brightness_lumens),
        m_temperature(temperature_celcius) {
            m_colour_value = (red*16*16*16*16) + (green*16*16) + blue;
    }

std::string ColourInfo::get_hex_value_string() const {
    char hex_val[6];
    std::string ans = "";

    sprintf(hex_val, "%X", this->m_colour_value);

    for(int i=0; i<6; ++i) {
        ans = ans + hex_val[i];
    }

    return ans;
}

std::ostream& operator<<(std::ostream& os, const ColourInfo& colour) {
    if(colour.m_colour_value == 0xff0000)
        os << "Red";
    else if(colour.m_colour_value == 0x00ff00)
        os << "Green";
    else if(colour.m_colour_value == 0x0000ff)
        os << "Blue";
    else
        os << colour.get_hex_value_string();

    os << " Brightness:" << colour.m_brightness_lumens << " lumens" 
        << " Temperature:" << colour.m_temperature;

    return os;
}
