#include <stdio.h>
int main(){
    printf("Input a number : ");
    int x;
    scanf("%d",&x);
    if (x<0){
        int y;
        y = x * (-1);
        printf("Absolute value of %d is : %d ",x,y);
    }
    else {
        printf("Absolute value of %d is : %d",x,x);
    }
    return 0;
}