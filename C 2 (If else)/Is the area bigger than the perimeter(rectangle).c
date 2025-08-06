#include <stdio.h>
int main(){
    printf("Length of the rectangle : ");
    float l,w,a,p;
    scanf("%f",&l);
    printf("Width of the rectangle : ");
    scanf("%f",&w);
    a = l*w;
    p = 2*(l+w);
    if (a>p) {
        printf("Value of area is bigger than value of perimeter.");
    }
    else if (p>a) {
        printf("Value of perimeter is bigger than value of area.");
    }
    else {
        printf("Area and perimeter are of same value.");
    }
    return 0;
}