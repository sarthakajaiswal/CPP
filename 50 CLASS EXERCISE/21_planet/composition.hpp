#ifndef _COMPOSITION_HPP 
#define _COMPOSITION_HPP

class Composition {
    private: 
        std::string m_component_name; 
        double m_composition_percent; 
        double m_error_percent; 

    public: 
        Composition(
            std::string component_name, 
            double composition_percent, 
            double error_percent
        ); 

        friend std::ostream& operator<<(std::ostream& os, const Composition& obj); 
}; 

#endif /* _COMPOSITION_HPP */