#include <stdio.h>
int main() {
    printf("Input a number to check if it is prime or not : ");
    int x;
    scanf("%d",&x);
    int a = 0;
    for (int i = 2; i <= x-1 ; i++) {
        if (x % i == 0){
        a = 1;
        break;
        }
}

    if (x == 1) printf("1 is neither prime or composite");
    else if (a == 0) printf("The number %d is a prime number",x);
    else printf ("The number %d is composite",x);        
    return 0;
}