#include <stdio.h>
int main() {
    printf("Input a number to find its factorial : ");
    int n,i;
    scanf("%d",&n);
    int f = 1;
    int a = n;
    while (a > 0) {
    i = a % 10;
    f = f * i;
    a--;
    }
    printf("Factorial of the number %d is : %d",n,f);
    return 0;
}