// header file inclusion 
#include <iostream> 
#include <exception> 
#include <cmath> 

// class definition 
class MassAndDistance 
{
    private: 
        double m1; 
        double m2; 
        double r; 

    public: 
        MassAndDistance(double _m1, double _m2, double _r); 
        {
            if(m1 <= 0.0 || m2 <= 0.0 || r <= 0.0) 
                throw std::domain_error("Bad values for mass and/or distance"); 

            this->m1 = _m1; 
            this->m2 = _m2; 
            this->r = _r; 
        }

        double ComputeGravitational() const 
        {
            // variable declarations 
            double G = 6.67 * 10e-11; 
            double F; 
            
            // code 
            F = (G * this->m1 * this->m2) / (this->r * this->r); 
            return (F); 
        }
}; 

int main(void) 
{
    // variable declarations 
    MassAndDistance EarthSun(1.9198e30, 5.9722e24, 149597871000); 
    MassAndDistance JupitorSun(1.9198e30, 1.89813e27, 760070000000); 
    double ForceBetweenEarthAndSun; 
    double ForceBetweenJupitorAndSun; 

    // code 
    ForceBetweenEarthAndSun = EarthSun.ComputeGravitational(); 
    ForceBetweenJuptorAndSun = JupitorSun.ComputeGravitational(); 

    std::cout << "Force between the sun and the earth is " 
                << ForceBetweenEarthAndSun << " Newton" << std::endl; 
    std::cout << "Force between the sun and the Jupitor is " 
                << ForceBetweenJupitorAndSun << " Newton" << std::endl; 

    return 0; 
}

