#include <stdio.h>
int main() {
    int x;
    int sum = 0;
    printf("Input a number : ");
    scanf("%d",&x);
    while (x > 0){
        int last = x % 10;
    if (last % 2 == 0){ 
    sum = sum + last;}
    x = x / 10;
    }

    printf("Sum of all the even no. digits in the number is : %d",sum);
    return 0;
}
