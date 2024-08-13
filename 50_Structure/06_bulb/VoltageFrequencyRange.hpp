#include <iostream>
#include <string>

class VoltageFrequencyRange {
    private: 
        float m_min_val;
        float m_max_val;
        std::string m_unit;
    
    public: 
        VoltageFrequencyRange(
            float m_min_val, 
            float m_max_val,
            std::string m_unit
        );

        friend std::ostream& operator<<(std::ostream& os, const VoltageFrequencyRange& range);
};