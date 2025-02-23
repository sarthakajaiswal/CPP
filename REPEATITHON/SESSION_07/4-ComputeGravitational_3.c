// header file inclusion 
#include <iostream> 
#include <exceotion> 
#include <cmath> 

// class definition 
class MassAndDistance 
{
    private: 
        double m1; 
        double m2; 
        double r; 

    public: 
        MassAndDistance(double _m1, double _m2, double _r) 
        {
            if(_m1 <= 0.0 || _m2 <= 0.0 || _r <= 0.0) 
                throw std::domain_error("Bad values for mass and/or distance"); 

            this->m1 = _m1; 
            this->m2 = _m2; 
            this->r = _r; 
        }

        double ComputeGravitational() const 
        {
            // variable declarations 
            double G = 6.67 * (10e-11); 
            double F; 

            // code 
            F = (G * this->m1 * this->m2) / (this->r * this->r); 
            return (F); 
        }
}

int main(void) 
{
    // variable declarations 
    MassAndDistance earthSun_saj(
        1.9198 * (10e30), 
        5.9722 * (10e24), 
        149597871000
    ); 
    MassAndDistance jupitorSun_saj(
        1.9891 * (10e30), 
        1.89813 * (10e27), 
        760070000000
    ); 
    double forceBetweenEarthAndSun_saj; 
    double forceBetweenJupitorAndSun_saj; 

    // code 
    forceBetweenEarthAndSun_saj = earthSun.ComputeGravitational(); 
    forceBetweenJupitorAndSun_saj = jupitorSun.ComputeGravitational(); 

    std::cout << "Force between the Sun and the Earth : " 
                << forceBetweenEarthAndSun_saj << " Newton" << std::endl; 
    
    std::cout << "Force between the Sun and the Jupitor : " 
                << forceBetweenJupitorAndSun_saj << " Newton" << std::endl; 

    return 0; 
}