#include <stdio.h>
int main(){
    float p,r,t,si;
    printf("Your principal amount : \n");
    scanf("%f",&p);
    printf("Your Interest rate is : \n");
    scanf("%f",&r);
    printf("Your Time period in years is : \n");
    scanf("%f",&t);
    si = (p*r*t)/100;
    printf("Your interest amount will be : %f",si);
    return 0;
}