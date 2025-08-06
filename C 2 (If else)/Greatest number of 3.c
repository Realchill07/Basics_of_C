#include <stdio.h>
int main(){
    int x,y,z;
    printf("Input first number : ");
    scanf("%d",&x);
    printf("\nInput second number : ");
    scanf("%d",&y);
    printf("\nInput third number : ");
    scanf("%d",&z);
    if (x>y && x>z){
        printf("\nFirst number is the greatest.");
    }
    else if (y>x && y>z){
        printf("\nSecond number is the greatest.");
    }
    else if (z>x && z>y){
        printf("The third number is the largest.");
    }
    else {
        printf("All numbers are equal");
    }
    return 0;
}