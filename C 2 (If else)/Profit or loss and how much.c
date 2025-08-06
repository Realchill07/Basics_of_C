#include <stdio.h>
int main(){
    printf("Input the cost price : \n");
    float c,s;
    scanf("%f",&c);
    printf("Input the selling price : \n");
    scanf("%f",&s);
    if (c>s) {
        float l;
        l = c - s;
        printf("The loss incurred by doing this sale : %f",l);
        } 
        else if (s>c){
            float p;
            p = s - c;
            printf("The profit made by doing this sale : %f",p);
        }
        else {
            printf("There was not profit or loss by doing this sale.");
        }
    }