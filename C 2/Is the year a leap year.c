#include <stdio.h>
int main(){
    printf("Input any year to check if it is a leap year : ");
    int y;
    scanf("%d",&y);
    if (y%4 == 0){
        printf("The year %d is a leap year.",y);
    }
    else {
        printf("The year %d is not a leap year.",y);
    }
    return 0;
}