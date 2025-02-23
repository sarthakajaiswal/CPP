#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 

// Definition of structure MassAndDistance 
// capturing mass and distance data of objects 
struct MassAndDistance 
{
    double m1; 
    double m2; 
    double r; 
}

// Function declaration 
double ComputeGravitational(struct MassAndDistance* pData); 

int main(void) 
{
    // variable declarations 
    struct MassAndDistance earthSun_saj; 
    struct MassAndDistance_jupitorSun_saj; 
    double forceBetweenEarthAndSun_saj; 
    double forceBetweenJupitorAndSun_saj; 

    // code 
    earthSun_saj.m1 = 1.9198e30; 
    earthSun_saj.m2 = 5.9722e24; 
    earthSun_saj.r = 1495977871000; 

    forceBetweenEarthAndSun_saj = ComputeGravitational(&earthSun_saj); 

    printf("Gravitational force between the sun and the earth = %lf Newton\n", 
                forceBetweenEarthAndSun_saj); 

    jupitorSun_saj.m1 = 1.9891e30; 
    jupitorSun_saj.m2 = 1.89813e27; 
    jupitorSun_saj.r = 760070000000; 
    forceBetweenJupitorAndSun_saj = ComputeGravitational(&jupitorSun_saj); 
    printf("Gravitational force betweem the jupitor and the sun = %lf Newton", 
                forceBetweenJupitorAndSun_saj); 

    return (0); 
}

double ComputeGravitational(struct MassAndDistance* pData) 
{
    // variable declarations 
    double G = 6.67 * 10e-11; /* gravitational constant */
    double F; /* for storing gravitational force */

    // code 
    if(pData->m1 <= 0.0 || pData->m2 <= 0.0 || pData->r <= 0.0) 
        return (NAN); 

    F = (G * pData->m1 * pData->m2) / (pData->r * pData->r); 
    return (F); 
}