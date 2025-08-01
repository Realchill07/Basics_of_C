#include <stdio.h>
int main(){
    printf("Input a number : ");
    int x;
    scanf("%d",&x);
    if ((x % 5 == 0 || x % 3 == 0) && x % 15 != 0)  {
        printf("The number is divisible by 3 or 5 but not 15.");
    }
    else {
        printf("The condition is not met.");
    }
    return 0;
}