#include <stdio.h>
int main() {
    int n;
    printf("Nummber of items : ");
    scanf("%d",&n);
    float total = 0;
    for (int i = 1; i <= n; i++) {
        char item[30];
        printf("Enter name of the item : ");
        scanf("%s",item);
        int numberofunits;
        printf("Enter no. of units bought of the item : ");
        scanf("%d",&numberofunits);
        int price;
        printf("Enter the price per unit : ");
        scanf("%d",&price);
        total = total + numberofunits * price;
    }
    if (total > 1000) total = total - (10 * total)/ 100;
    else if (500 < total && total < 999) total = total - (5 * total)/100;
    else total = total;
    printf("Your bill is : %.2f ",total);
    return 0;
}