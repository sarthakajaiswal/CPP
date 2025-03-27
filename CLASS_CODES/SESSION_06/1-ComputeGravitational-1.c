/*
    GOAL : to study how data is stored and processed in C (procedural language) - STAGE 01  
    DATE : 
*/

#include <stdio.h> 

int main(void) 
{
    double m1;      /* for storing mass of object 1 */ 
    double m2;      /* for storing mass og object 2 */
    double r;       /* for storing distance between the objects */
    double G = 6.67 * 10e-11; /* universl gravitational constant */
    double F;       /* for storing gravitational force of attraction */

    printf("Enter mass of object 1 in ksg : "); 
    scanf("%lf", &m1); 

    printf("Enter mass of object 2 in kgs : "); 
    scanf("%lf", &m2); 

    printf("Enter distance between the objects in meters : "); 
    scanf("%lf", &r); 

    if(m1 <= 0.0 || m2 <= 0.0 || r <= 0.0) 
    {
        printf("Invalid values for mass and/or distance "); 
        return (-1); 
    }

    F = (G * m1 * m2) / (r * r); 
    printf("Gravitational force of attraction = %lf Newton\n", F); 

    return (0); 
}

