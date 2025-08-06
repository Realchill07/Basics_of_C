#include <stdio.h>
int main() {
    printf("Input the first number : ");
    int a,d,n;
    scanf("%d",&a);
    printf("Input difference : ");
    scanf("%d",&d);
    for (int i = 0; a > 0; i++) {
        printf("%d ", a);
        a = a - d;
    }
    return 0;
}