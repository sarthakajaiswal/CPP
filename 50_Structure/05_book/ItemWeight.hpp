#pragma once

#include <cstdio>
#include <string>

class ItemWeight {
    private: 
        float m_weight;
        std::string m_unit;
    
    public:
        ItemWeight(float weight, std::string unit);
    friend std::ostream& operator<<(std::ostream& os, const ItemWeight& weight);
};