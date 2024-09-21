#ifndef _FREQUENCY_HPP 
#define _FREQUENCY_HPP 

#include <iostream> 
#include "units.hpp" 

namespace CurrentParameter {
    class Frequency {
        private: 
            double m_value; 
            frequency_unit_t m_unit; 
        public: 
            Frequency(double value, frequency_unit_t unit);

            friend std::ostream& operator<<(std::ostream& os, const Frequency& obj);  
    }; 
} 

#endif /* _FREQUENCY_HPP */