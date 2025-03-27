// 1
// header files 
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
        MassAndDistance(double _m1, double _m2, double _r) 
        {
            if(_m1 <= 0.0 || _m2 <= 0.0 || _r <= 0.0) 
                throw std::domain_error("Invalid values for mass and/or distance"); 
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
            return F; 
        }
};

int main(void) 
{
    // variable declarations 
    MassAndDistance earthSun(1.9891e30, 5.9722e24, 149597871000.0); 
    MassAndDistance jupitorSun(1.9891e30, 1.89813e27, 760060000000); 
    double forceBetweenEarthAndSun; 
    double forceBetweenJupitorAndSun; 

    // code 
    forceBetweenEarthAndSun = earthSun.ComputeGravitational(); 
    forceBetweenJupitorAndSun = jupitorSun.ComputeGravitational(); 

    std::cout << "Force between the sun and the earth is : "  
            << forceBetweenEarthAndSun << std::endl; 

    std::cout << "Force between the Sun and the Jupitor is : " 
            << forceBetweenJupitorAndSun << std::endl; 

    return 0; 
}

// 2 
// header files 
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
            double G = 6.67 * 10e-11; 
            double F; 

            // code 
            F = (G * this->m1 * this->m2) / (this->r * this->r); 
            return F; 
        }
}; 

int main(void) 
{
    // variable declarations 
    MassAndDistance earthSun(1.9198 * (10e30), 5.9722 * (10e24), 149597871000.0); 
    MassAndDistance jupitorSun(1.9891 * (10e30), 1.89813 * (10e27), 760070000000.0); 
    double forceBetweenJupitorAndSun; 
    double forceBetweenEarthAndSun; 

    // code 
    forceBetweenEarthAndSun = earthSun.ComputeGravitational(); 
    forceBetweenJupitorAndSun = jupitorSun.ComputeGravitational(); 

    std::cout << "Force between the Sun and the Earth = " 
        << forceBetweenEarthAndSun << std::endl; 
    
    std::cout << "Force between the Jupitor and the Sun = " 
        << forceBetweenJupitorAndSun << std::endl; 

    return 0; 
}
