#include <iostream>
#include <string>

class ItemWeight {
    private:
        float m_value;
        std::string m_unit;
    
    public: 
        ItemWeight(float value, std::string unit);

        friend std::ostream& operator<<(std::ostream& os, const ItemWeight& weight);
};