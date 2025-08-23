#include <stdio.h>
int main () {
    float in,bill,surcharge;
    printf("Input the units of electricity consumed : ");
    scanf("%f",&in);
    if (in > 1 && in <= 50) bill = in * 0.50;
    else if (in > 51 && in <= 150) bill = in * 0.75;
    else if (in > 151 && in <= 250) bill = in * 1.20;
    else if (in > 251) bill = in * 1.50;
    else printf("Enter a positive value for the units of electricity you consumed.");
    surcharge = bill * 0.20;
    bill += surcharge;
    printf("Your total bill is %.2f",bill);
    return 0;
}
