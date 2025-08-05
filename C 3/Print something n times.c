#include <stdio.h>
int main() {
    printf("Input a number : ");
    int n;
    scanf("%d",&n);
    for (int i = 1 ; i <= n ; i++)//Here "i++" is same as "i = i + 1". I can also put i = i + 2 and the code will run.
                                 //The i = i +/- 'x'. Is called updation.
    printf("This is a forloop.\n");
    return 0;
}