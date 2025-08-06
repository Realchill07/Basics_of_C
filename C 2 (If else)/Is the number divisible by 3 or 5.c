#include <stdio.h>
int main(){
    printf("Input a number : ");
    int x;
    scanf("%d",&x);
    if (x % 3 == 0 || x % 5 == 0){
        printf("The number '%d' is divisible by 3 or 5.",x);
    }
    else {
        printf("The number '%d' is not divisible by 3 or 5.",x);
    }
    return 0;
}