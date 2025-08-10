#include <stdio.h>
int main (){
    printf("Input the number : ");
    int s;
    scanf("%d",&s);
    for (int i = 1; i <= s; i++){
        int a = 1;
        for (int j = 1; j <= s; j++)
        {
            int d = a + 64;
        char ch = (char)d;
        printf("%c",ch);
        a++;
    }
        printf("\n");
    }
    return 0; //lund
}