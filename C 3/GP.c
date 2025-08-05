#include <stdio.h>
int main() {
    printf("Input the first number : ");
    int a,r,n;
    scanf("%d", &a);
    printf("Input the common ratio :");
    scanf("%d", &r);
    printf("Input the number of terms :");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        a *= r;
    }
    return 0;
}