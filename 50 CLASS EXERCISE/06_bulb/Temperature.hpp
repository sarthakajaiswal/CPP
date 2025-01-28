#pragma once

#include <cstdio>
#include <iostream>
#include <string>

typedef enum temperature_unit{
    DEGREE_CELCIUS = 0,
    DEGREE_FARENHEIT
}unit_t;

class Temperature{
    private:
        float m_value;
        unit_t m_unit;
        
    public:
        Temperature(float value);

        std::string get_unit_string() const;
        Temperature& convert_to_farenheit();
        Temperature& convert_to_celcius();

        friend std::ostream& operator<<(std::ostream& os, const Temperature& temp);
};