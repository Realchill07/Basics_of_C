#include <stdio.h>
int main() {
    int n;
    printf("Input the number :  ");
    scanf("%d",&n);
    int stars = n;
    int spaces = 1;
    for(int l = 1; l <= 2*n + 1; l++)
    printf("%d",l);
    printf("\n");
    for (int i = 1; i <= n; i++){
        int a = 1;
        for(int j = 1; j <= stars; j++){ //Numbers
            printf("%d",a);
            a++;
        }
        for(int k = 1; k <= spaces; k++){ //spaces
            printf(" ");
            a++;
        }
        for(int j = 1; j <= stars; j++){ //Numbers
            printf("%d",a);
            a++;  
        }
    stars--;
    spaces+=2;
    printf("\n"); 
    }   
    return 0;
}