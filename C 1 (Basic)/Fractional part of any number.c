#include <stdio.h>
int main () {
    printf("Enter any number and it will result in only the fractional part : ");
    float x;
    scanf("%f",&x);
    int y = x;
    float z = x - y;
    printf("Fractional part of %f is : %f",x,z);
    return 0;
}