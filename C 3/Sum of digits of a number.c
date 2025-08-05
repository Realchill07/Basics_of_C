#include <stdio.h>
int main() {
    int sum = 0, x;
    printf("Input a number : ");
    scanf("%d",&x);
    while (x > 0){
      int last = x % 10;
      sum = sum + last;
      x = x / 10;
    }
    printf("The sum of digits is : %d",sum);
    return 0;
}