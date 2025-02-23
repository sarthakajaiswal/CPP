#include <stdio.h> 
#include <stdlib.h> 

int main(void) 
{
    double m1; /* for storing mass of object 1 */ 
    double m2; /* for storing mass of object 2*/
    double r;  /* for storing distance between the objects */
    double G = 6.67 * 10e-11; /* universal gravitational constant */
    double F; /* for storing gravitational force of attraction in Newton*/

    printf("Enter mass of object 1 in kgs : "); 
    scanf("%lf", &m1); 

    printf("Enter mass of object 2 in kgs : "); 
    scanf("%lf", &m2); 

    printf("Enter the distance in meters : "); 
    scanf("%lf", &r); 

    if(m1 <= 0.0 || m2 <= 0.0 || r <= 0.0) 
    {
        fprintf(stderr, "fatal : invalid input values for mass or distance\n"); 
        return (-1); 
    }

    F = (G * m1 * m2) / (r * r); 
    printf("Gravitational force between the objects = %lf", F); 

    return (0); 
} 

