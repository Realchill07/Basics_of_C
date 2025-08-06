#include <stdio.h>
int main(){
    int a,b;
    printf("Input 2 numbers : ");
    scanf("%d %d",&a, &b);
    if (a>=b) {
    float remainder = a % b;
    printf("Remaider is : %f", remainder);
    }
    else {
        printf("Input the first number equal to or bigger than second number.");
    }
    return 0;
}