// header file inclusion 
#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 

// definition of structure MassAndDistance 
// capturing mass and distance data of 
// objects 
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
    struct MassAndDistance EarthSun; 
    struct MassAndDistance JupitorSun; 
    double ForceBetweenEarthAndSun; 
    double ForceBetweenJupitorAndSun; 

    // code 
    EarthSun.m1 = 1.9198e30; 
    EarthSun.m2 = 5.9722e24; 
    EarthSun.r = 149597871000; 

    ForceBetweenEarthAndSun = ComputeGravitational(&EarthSun); 
    printf("Gravitational force between the sum and the earth - %lf Newton\n", ForceBetweenEarthAndSun); 

    JupitorSun.m1 = 1.9891e30; 
    JupitorSun.m2 = 1.89813e27; 
    JupitorSun.r = 760070000000; 

    ForceBetweenJupitorAndSun = ComputeGravitational(&JupitorSun); 
    printf("Gravitational Force between the Jupitor And the Sun - %lf Newton\n", ForceBetweenJupitorAndSun); 

    return (0); 
}

double ComputeGravitational(struct MassAndDistance* pData) 
{
    // variable definitions 
    double G = 6.67 * 10e-11;   // universal constant of gravitation 
    double F; // for storing amount of force in Newton 

    // code 
    if(pData->m1 <= 0.0 || pData->m2 <= 0.0 || pData->r <= 0.0) 
        return (NAN); 

    F = (G * pData->m1 * pData->m2) / (pData->r * pData->r); 
    return (F); 
}

