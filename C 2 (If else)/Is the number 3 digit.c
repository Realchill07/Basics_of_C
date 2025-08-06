#include <stdio.h>
int main(){
    printf("Input a number : ");
    int x;
    scanf("%d",&x);
    if (x>99 && x<1000){
        printf("The number '%d' is a 3 digit number.",x);
    }
    else {
        printf("The number '%d' is not a 3 digit number.",x);
    }
    return 0;
}