#include <stdio.h>
int main() {
    printf("Input a number : ");
    int n;
    scanf("%d",&n);
    printf("The multiplication table of %d is : \n",n);
    for (int i = n ; i <= n * 10 ; i = i + n){
        printf("%d\n",i);
    }
    return 0;
}