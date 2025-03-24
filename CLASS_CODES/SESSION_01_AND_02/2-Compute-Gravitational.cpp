// STAGE 2 : OBJECT BASED PROGRAMMING IN C++ : USING BUILT IN OBJECTS 

#include <iostream> 

int main(void) 
{
    using std::cout;    // ostream | std::ostream 
    using std::cin;     // istream | std::ostream 

    double G = 6.67 * 10e-11;   // universal gravitational constant 
    double m1;      // for storing mass of object 1 in kgs 
    double m2;      // for storing mass of object 2 in kgs 
    double r;       // for storing distance between the objects in meters 
    double F;       // for storing force in Newton 

    std::cout << "Enter mass of object 1 in kgs : "; 
    cin >> m1; 

    std::cout << "Enter mass of object 2 in kgs : "; 
    cin >> m2; 

    std::cout << "Enter distance between objects in meters : "; 
    std::cin >> r; 

    if(m1 <= 0.0 || m2 <= 0.0 || r <= 0.0) 
    {
        std::cout << "Invalid values for mass and/or distance\n"; 
        return (-1); 
    }

    F = (G * m1 * m2) / (r * r); 

    std::cout << "Gravitational force = " << F << " Newton\n"; 

    return 0; 
}

