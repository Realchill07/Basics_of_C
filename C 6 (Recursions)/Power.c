#include <stdio.h>
int numbers (int x,int y) {
    if (y == 0) {      
        return 1;
    }
    return x * numbers(x,y-1);
}
int main() { 
    int a,b;
    printf("Input the base : ");
    scanf("%d",&a);
    printf("Input the power : ");
    scanf("%d",&b);
    int answer = numbers(a,b);
    printf("%d",answer);
    return 0;
}