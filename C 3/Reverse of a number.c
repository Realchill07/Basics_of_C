#include <stdio.h>
int main() {
    printf("Input a number : ");
    int n;
    scanf("%d",&n);
    int r = 0;
    while (n>0) {
        r = r + (n % 10);
        r = r * 10;
        n = n / 10;
    }
    r = r / 10;
    printf("Reverse of the number is : %d ",r);
    return 0;
}