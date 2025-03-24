// STAGE 4 : OBJECT BASED PROGRAMMING IN C++ : USING CLASS 

#include <iostream> 
#include <cstdlib> 

using std::cout; 

class MassAndDistance 
{
    private: 
        double m1;  // for storing mass of object 1  
        double m2;  // for storing mass of object 2 
        double r;   // for storing distance between them 

    public: 
        // Constructor 
        MassAndDistance(double _m1, double _m2, double _r) 
        {
            if(_m1 <= 0.0 || _m2 <= 0.0 || _r <= 0.0) 
            {
                cout << "Invalid data for mass or distance\n"; 
                exit(-1); 
            }
            this->m1 = _m1; 
            this->m2 = _m2; 
            this->r = r; 
        }

        // member function 
        double computeGravitational() 
        {
            double G = 6.67 * 10e-11; 
            double F; 

            F = (G * this->m1 * this->m2) / (this->r * this->r); 
            return (F); 
        }
}; 

int main(void) 
{
    MassAndDistance sunEarth(1.9891e30, 5.9722e24, 149597871000.0); 
    MassAndDistance sunJupitor(1.9891e30, 1.89813e27, 760070000000.0); 

    cout << "Gravitational force between the Sun and the Earth = "  
            << sunEarth.computeGravitational() << " Newton\n"; 

    cout << "Gravitational force between the Sun and the Jupitor = " 
            << sunJupitor.computeGravitational() << " Newton\n"; 

    return 0; 
}
