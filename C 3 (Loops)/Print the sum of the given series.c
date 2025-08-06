#include <stdio.h>
int main () {
    printf("To find the sum of series 1-2+3-4+5-.....n till n. Input value of n : ");
    int n;
    scanf("%d",&n);
    int i = 1;
    int sum = 0;
    while(i <= n) {
        if (i % 2 != 0)
    {
        sum = sum + i;
        i++;
    }
        else
    {
        sum = sum - i;
        i++ ;
    }
}
printf("Sum of the given series till %d is : %d",n,sum);
    return 0;
}