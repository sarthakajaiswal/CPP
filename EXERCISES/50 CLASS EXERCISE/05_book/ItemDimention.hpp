#pragma once

#include <cstdio>
#include <string>

class ItemDimention {
    private: 
        float m_length;
        float m_breadth;
        float m_height;
        std::string m_unit;

    public: 
        ItemDimention(
            float length,
            float breadth,
            float height,
            std::string unit
        );
    friend std::ostream& operator<<(std::ostream& os, const ItemDimention& dimention);
};