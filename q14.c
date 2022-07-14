#include<stdio.h>
int main()
{
    float radius,area;
    printf("Enter a radius of a circle: ");
    scanf("%f",&radius);
    area=3.14*radius*radius;
    printf("Area of circle %f having radius %f",area,radius);
}