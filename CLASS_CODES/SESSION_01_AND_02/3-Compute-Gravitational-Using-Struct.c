// STAGE 3 : PROCEDURAL PROGRAMMING IN C USING STRUCT 

#include <stdio.h> 
#include <stdlib.h> 

struct MassAndDistance 
{
    double m1; 
    double m2; 
    double r; 
}; 

double ComputeGravitationalForce(struct MassAndDistance* pData); 

int main(void) 
{
    struct MassAndDistance sunEarth;    // 24 
    struct MassAndDistance sunJupitor;  // 24 
    double ForceBetweenSunAndEarth;     // 8 
    double ForceBetweenSunAndJupitor;   // 8 

    sunEarth.m1 = 1.9198e30; // mass of sun 
    sunEarth.m2 = 5.9722e24; // mass of earth 
    sunEarth.r = 149597871000; // distance between them 
    ForceBetweenSunAndEarth = ComputeGravitationalForce(&sunEarth); 
    printf("Gravitational Force between Sun and Earth = %lf Newton\n", ForceBetweenSunAndEarth); 

    sunJupitor.m1 = 1.9198e30; // mass of sun 
    sunJupitor.m2 = 1,89813e27; // mass of jupitor 
    sunJupitor.r = 76007000000; // distance between them 
    ForceBetweenSunAndJupitor = ComputeGravitationalForce(&sunJupitor); 
    printf("Gravitational force between Sun and Jupitor = %lf Newton\n", ForceBetweenSunAndJupitor); 

    return 0; 
} 

double ComputeGravitationalForce(struct MassAndDistance* pData) 
{
    double F; 
    double G = 6.67 * 10e-11; 

    if(pData->m1 <= 0.0 || pData->m2 <= 0.0 || pData->r <= 0.0) 
    {
        printf("Invalid data for mass or distance.. Exitting..."); 
        exit(-1); 
    }

    F = (G * pData->m1 * pData->m2) / (pData->r * pData->r); 
    return (F); 
}

