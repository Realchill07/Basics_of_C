#include <stdio.h>
int main(){
    int a,b,c;
    printf("Input base : ");
    scanf("%d",&a);
    printf("Input power : ");
    scanf("%d",&b);
    c = 1;
    for (int i = 1; i <= b; i++){
        c = c * a;
    }
    printf("%d to the power of %d is %d",a,b,c);
    return 0;
}