#include <stdio.h>
int main () {
    int x, count = 0;
    printf("Enter a number : ");
    scanf("%d",&x);
    while (x != 0){
        x = x/10;
        count++;
    }
    printf("The number of digits in %d are : %d",x,count);
    return 0;
}