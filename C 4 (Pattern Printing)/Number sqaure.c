#include <stdio.h>
int main (){
    printf("Input the number : ");
    int s;
    scanf("%d",&s);
    for (int i = 1; i <= s; i++){
        for (int i = 1; i <= s; i++)
        printf("%d",i);
        printf("\n");
    }
    return 0;
}