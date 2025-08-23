#include <stdio.h>
int main () {
    float p,c,b,m,co,pe;
    printf("Enter your marks in physics out of 100: ");
    scanf("%f",&p);
    printf("Enter your marks in chemistry out of 100 : ");
    scanf("%f",&c);
    printf("Enter your marks in biology out of 100 : ");
    scanf("%f",&b);
    printf("Enter your marks in maths out of 100 : ");
    scanf("%f",&m);
    printf("Enter your marks in computer out of 100 : ");
    scanf("%f",&co);
    pe = (((p + c + b + m + co) / 500) * 100 );
    printf("Your percentage is %.2f %%\n",pe);
    if (pe >= 90 && pe <= 100) printf("Your grade is A.");
    else if (pe >= 80 && pe < 90) printf("Your grade is B.");
    else if (pe >= 70 && pe < 80) printf("Your grade is C.");
    else if (pe >= 60 && pe < 70) printf("Your grade is D.");
    else if (pe >= 50 && pe < 60) printf("Your grade is E.");
    else if (pe >= 40 && pe < 50) printf("Your grade is F.");
    else printf("Enter your marks in each subject out of 100.");
    return 0;
}