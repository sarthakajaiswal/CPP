#include <stdio.h> 

int main(void) 
{
    double m1; /* for storing mass of object 1 */
    double m2; /* for storing mass of object 2 */
    double r; /* for storing distance between the objects */
    double G = 6.67 * 10e-11; /* Gravitational constant */
    double F; /* for storing gravitational force of attraction */

    printf("Enter mass of object 1 in kgs: "); 
    scanf("%lf", &m1); 

    printf("Enter mass of object 2 in kgs : "); 
    scanf("%lf", &m2); 

    printf("Enter distance between the objects in kms : "); 
    scanf("%lf", &r); 

    if(m1 <= 0.0 || m2 <= 0.0 || r <= 0.0) 
    {
        printf("Invalid values for mass and/or distance\n"); 
        return (-1); 
    }

    F = (G * m1 * m2) / (r * r); 

    printf("Gravitational force between two objects = %lf Newton\n", F); 

    return (0); 
}