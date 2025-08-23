#include <stdio.h>
void numbers (int x) {
    if (x == 0) return;
    printf("%d\n",x);
    numbers(x-1);
}
int main() { 
    int n;
    printf("Input the number : ");
    scanf("%d",&n);
    numbers(n);
    return 0;
}