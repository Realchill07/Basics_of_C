#include <stdio.h>
int main() {
    printf("Input a number: ");
    int x;
    scanf("%d", &x);
    // Ternary operations ke andar hum generally ek condition check karte hain
    // aur uske basis par do alag-alag values return karte hain.
    // // example, to check the given number is even or odd me hum below code use karte hai
    // if (x%2 == 0)
    // printf("%d is even",x);
    // else
    // // printf("%d is odd",x);
    // but ternary me same kaam ek line me hoga ye pattern follow karte
    // condition ? if true : if false;
    x % 2 == 0 ? printf("%d is even", x) : printf("%d is odd", x);
    return 0;
}