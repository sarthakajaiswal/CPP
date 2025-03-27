// 1 
// header files 
#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 

// definition of structure MassAndDistance capturing mass and distance data of objects 
struct MassAndDistance 
{
    double m1; 
    double m2; 
    double r; 
}; 

// function declarations 
double ComputeGravitational(struct MassAndDistance* pData); 

int main(void) 
{
    // variables 
    struct MassAndDistance earthSun; 
    struct MassAndDistance jupitorSun; 
    double forceBetweenEarthAndSun; 
    double forceBetweenJupitorAndSun; 

    // code 
    earthSun.m1 = 1.9891e30; 
    earthSun.m2 = 5.9722e24; 
    earthSun.r = 149597871000; 
    forceBetweenEarthAndSun = ComputeGravitational(&earthSun); 
    printf("Gravitational force between the Sun and the Earth = %lf Newton", 
            forceBetweenEarthAndSun); 

    jupitorSun.m1 = 1.9891e30; 
    jupitorSun.m2 = 1.89813e27; 
    jupitorSun.r = 760070000000;
    forceBetweenJupitorAndSun = ComputeGravitational(&jupitorSun); 
    printf("Gravitational force between the Sun and the Jupitor = %lf Newton", 
        forceBetweenJupitorAndSun); 

    return (0); 
}

double ComputeGravitational(struct MassAndDistance* pData) 
{
    // variable declarations 
    double G = 6.67 * 10e-11; // universal constant of gravitation 
    double F;   // for storing amount of force in Newton 

    if(pData->m1 <= 0.0 || pData->m2 <= 0.0 || pData->r <= 0.0) 
        return (NAN); 
    
    F = (G * pData->m1 * pData->m2) / (pData->r * pData->r); 
    return (F); 
}


// 2 
// header files 
#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 

// defining structure MassAndDistance capturing mass and distance data of objects 
struct MassAndDistance 
{
    double m1; 
    double m2; 
    double r; 
}; 

// function declarations 
double ComputeGravitational(struct MassAndDistance* pData); 

// entry-point function 
int main(void) 
{
    // variable declarations 
    struct MassAndDistance earthSun; 
    struct MassAndDistance jupitorSun; 
    double forceBetweenEarthAndSun; 
    double forceBetweenJupitorAndSun; 

    // code 
    earthSun.m1 = 1.9891e30; 
    earthSun.m2 = 5.9722e24; 
    earthSun.r = 149597871000; 

    forceBetweenEarthAndSun = ComputeGravitational(&earthSun); 
    printf("Force of gravitation between Sun and Earth = %lf Newton\n", 
            forceBetweenEarthAndSun); 

    jupitorSun.m1 = 1.9891e30; 
    jupitorSun.m2 = 5.9722e24; 
    jupitorSun.r = 149597871000; 

    forceBetweenJupitorAndSun = ComputeGravitational(&jupitorSun); 
    printf("Force of gravitation between the Jupitor and the Sun = %lf Newton\n", 
            forceBetweenJupitorAndSun); 

    return (0); 
}

double ComputeGravitational(struct MassAndDistance* pData) 
{
    // variable declataions 
    double G = 6.67 * 10e-11; /* Universal gravitational constant */
    double F; /* for storing force in Newton */ 

    if(pData->m1 <= 0.0 || pData->m2 <= 0.0 || pData->r <= 0.0) 
        return (NAN); 
    
    F = (G * pData->m1 * pData->m2) / (pData->r * pData->r); 
    return (F); 
}
