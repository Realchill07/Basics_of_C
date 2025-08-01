#include <stdio.h>
int main(){
    int x,y,z;
    printf("Input first side's length : ");
    scanf("%d",&x);
    printf("\nInput second side's length : ");
    scanf("%d",&y);
    printf("\nInput third side's length : ");
    scanf("%d",&z);
    if (x + y > z && y + z > x && x + z > y){
        printf("Yes, these can be sides of a triangle.");
    }
    else {
        printf("No, these can not be sides of triangle.");
    }
    return 0;
}