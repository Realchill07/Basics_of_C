#include <stdio.h>
int main () {
    int n;
    printf("Input the number : ");
    scanf("%d",&n);
    int factorial = 1;
    for (int i = 1; i <= n; i++){
        factorial = factorial * i;
        printf("Factorial of %d is %d\n",i,factorial); //for factorial of every number till 'n'
    }
    //printf("Factorial of %d is %d",n,factorial); //for factorial of only 'n'
    return 0;
}