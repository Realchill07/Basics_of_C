#include <stdio.h>
void numbers (int x) {
    if (x == 0) return;
    numbers(x-1);
    printf("%d\n",x);
}
int main() { 
    int n;
    printf("Input the number : ");
    scanf("%d",&n);
    numbers(n);
    return 0;
}