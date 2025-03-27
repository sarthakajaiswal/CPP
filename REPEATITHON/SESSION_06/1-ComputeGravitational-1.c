// 1 
#include <stdio.h> 

int main(void) 
{
    double m1; /* for storing mass of object 1 in kgs */
    double m2; /* for storing mass of object 2 in kgs */
    double r;  /* for storing distance between the objects in merers */
    double G = 6.67 * 10e-11; /* universal constant of gravitation */
    double F;   /* for storing force in Newton */

    printf("Enter mass of object 1 in kgs : "); 
    scanf("%lf",&m1); 

    printf("Enter mass of object 2 in kgs : "); 
    scanf("%lf", &m2); 

    printf("Enter distance between the objects in meters : "); 
    scanf("%lf", &r); 

    if(m1 <= 0.0 || m2 <= 0.0 || r <= 0.0) 
    {
        printf("Invalid values for mass and/or distance\n"); 
        return (-1); 
    }

    F = (G * m1 * m2) / (r * r); 
    printf("Gravitational force of attraction = %lf Newton\n", F); 

    return (0); 
}

//2 
#include <stdio.h> 

int main(void) 
{
    double m1;  /* for storing mass of object 1 in kgs */ 
    double m2;  /* for storing mass of object 2 in kgs */
    double r;   /* for storing distance between objects in meters */
    double G = 6.67 * 10e-11; /* Universal constant of gravitation */
    double F;   /* for storing force of gravitation in Newton */

    printf("Enter mass of object 1 in kgs :"); 
    scanf("%lf", &m1); 

    printf("Enter mass of object 2 in kgs : "); 
    scanf("%lf", &m2); 

    printf("Enter distance between the objects in meters :"); 
    scanf("%lf", &r); 

    if(m1 <= 0.0 || m2 <= 0.0 || r <= 0.0) 
    {
        printf("Invalid values for mass and/or distance\n"); 
        exit(-1); 
    }

    F = (G * m1 * m2) / (r * r); 
    printf("Gravitational force of attraction = %lf Newton\n", F); 

    return (0); 
}
