#ifndef _BOXCOMPONENT_HPP
#define _BOXCOMPONENT_HPP

class BoxComponent {
    private: 
        std::string m_name;
        unsigned short m_quantity;
        
    public: 
        BoxComponent(std::string name, unsigned short quantity);

        friend std::ostream& operator<<(std::ostream& os, const BoxComponent& obj); 
}; 

#endif