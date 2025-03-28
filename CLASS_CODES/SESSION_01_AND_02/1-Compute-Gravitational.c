// STAGE 1 : USING PREOCEDURAL PROGRAMMING : USING BUILTIN FUNCTIONS 

#include <stdio.h> 

int main(void) 
{
    double G = 6.67 * 10e-11;   /* Universal gravitational constant */
    double m1;  /* for storing mass of object 1 in kgs */
    double m2;  /* for storing mass of object 2 in kgs */
    double r;   /* for storing distance between the objects in meters */
    double F;   /* for storing gravitational force in Newton */

    printf("Enter mass of object 1 in kgs : "); 
    scanf("%lf", &m1); 

    printf("Enter mass of object 2 in kgs : "); 
    scanf("%lf", &m2); 

    printf("Enter distance between the objects in meters : "); 
    scanf("%lf", &r); 

    if(m1 <= 0.0 || m2 <= 0.0 || r <= 0.0) 
    {
        printf("Invalid values for mass and/or distance.\n"); 
        exit(-1); 
    }

    F = (G * m1 * m2) / (r * r); 

    printf("Force of gravitation = %lf Newton\n", F); 

    return (0); 
}

