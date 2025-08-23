#include <stdio.h>
int main () {
    char n;
    printf("Input any character : ");
    scanf("%c",&n);
    if ((n >= 'A' && n <= 'Z') || (n >= 'a' && n <= 'z')) printf("The given character %c is an aplhabet.",n);
    else if (n >= '0' && n <= '9') printf("The given character %c is a number.",n);
    else printf("The given character %c is a special character.",n);
    return 0;
}