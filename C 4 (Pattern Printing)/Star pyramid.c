#include <stdio.h>
int main() {
    int n;
    printf("Input the number :  ");
    scanf("%d",&n);
    int stars = n;
    int spaces = 1;
    for(int l = 1; l <= 2*n + 1; l++)
    printf("*");
    printf("\n");
    for (int i = 1; i <= n; i++){
        for(int j = 1; j <= stars; j++) //stars
            printf("*");
        for(int k = 1; k <= spaces; k++) //spaces
            printf(" ");
        for(int j = 1; j <= stars; j++) //stars
            printf("*");  
    stars--;
    spaces+=2;
    printf("\n"); 
    }   
    return 0;
}