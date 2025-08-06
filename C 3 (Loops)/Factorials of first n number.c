#include <stdio.h>
int main() {
    printf("Factorials of first 'n' numbers. n : ");
    int n;
    scanf("%d",&n);
    int i = 1;
    int f = 1;
    while (i <= n){
    f = f * i;
    printf("Factorial of %d is : %d\n",i,f);
    i++;
    }
    // for(int i = 1; i <= n; i++){
    //     f = f * i;
    //     printf("Factorial is : %d\n",f);
    // }
    return 0;
}