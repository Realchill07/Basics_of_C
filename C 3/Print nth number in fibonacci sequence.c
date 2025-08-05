#include <stdio.h>
int main () {
    int n;
    printf("Input a number : ");
    scanf("%d",&n);
    int long a = 1;
    int long b = 1;
    int sum = 1;
    for (int i = 1 ; i <= n - 2 ; i++){
        sum = a + b;
        a = b;
        b = sum;
    }
    printf("The %dth fibonacci term is %d",n,sum);
    return 0;
}