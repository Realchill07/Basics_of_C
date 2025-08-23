#include <stdio.h>
int main () {
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if ( n % 55 == 0) printf("Number %d is divisible by both 5 and 11",n);
    else printf("Number %d is not divisble by 5 and 11",n);
    return 0;
}