#include <stdio.h>
int main () {
    int a,b;
    printf("Input the starting number : ");
    scanf("%d",&a);
    printf("Input the end number : ");
    scanf("%d",&b);
    for (int i = a; i <= b; i++){
    //     if (i % 2 != 0)
    // printf("%d\n",i);
    // else printf (" ");
    if ( i % 2 == 0){
    continue;
    }
    else printf("%d \n",i);
    }
    return 0;
}