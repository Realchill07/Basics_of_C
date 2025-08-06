#include <stdio.h>
int main()
{
    float r;
    printf("Enter radius : ");
    scanf("%f",&r);
    float pi = 3.14;
    float A = pi*r*r;
    printf("Area of the circle is :%f",A);
    return 0;
}