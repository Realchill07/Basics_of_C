//Print all the even numbers between 1 and 100.
#include <stdio.h>
int main() {
    printf("First we will print even numbers between 1 and 100\n");
    for(int i = 1; i <= 100 ; i++){
        if (i % 2 == 0)
        printf(" %d ",i);
    }
    printf("\n");
    printf("Now we will print odd numbers between 1 and 100\n");
    for(int i = 1; i <= 100 ; i++){
        if (i % 2 != 0)
        printf(" %d ",i);
    }
    return 0;
}