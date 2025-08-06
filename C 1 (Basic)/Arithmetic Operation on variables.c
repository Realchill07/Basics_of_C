#include <stdio.h>
int main ()
{
    int x;
    x = 5;
    printf("%d\n",x);
    x = x+4;
    printf("%d",x);
    int y = 2;
    printf("\n%d",x+y);
    printf("\n%d",x-y);
    printf("\n%d",x*y);
    printf("\n%d",x/y);
    int z = x+y;
    printf("\n%d",z);
    printf("%d",x%y);
    return 0;
}
