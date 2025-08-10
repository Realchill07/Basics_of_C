#include <stdio.h>
int main () {
    int l,w;
    printf("Input length of the rectangle : ");
    scanf("%d",&l);
    printf("Input width of the rectangle : ");
    scanf("%d",&w);
    for (int i = 1; i <= w; i++) {
        for (int j = 1; j <= l; j++)
        printf("*");
        printf("\n");
    }
    return 0;
}