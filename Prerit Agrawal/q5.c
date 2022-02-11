// Write a C program to enter the radius of a circle and find its diameter, circumference
// and area.
#include <stdio.h>
int main(){
    float r,a,d,c;
    printf("Enter the radius:\n");
    scanf("%f", &r);
    d = 2*r;
    printf("Diameter of the circle is %f \n", d);
    c = 2*3.14*r;
    printf("Circumference of the circle is %f \n", c);
    a = 3.14*r*r;
    printf("Area of the circle is %f", a);

    return 0;
}