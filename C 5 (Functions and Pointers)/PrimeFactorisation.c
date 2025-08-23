#include <stdio.h>
int is_prime(int x){
    if (x < 2) return 0;
    for (int m = 2; m * m <= x; m++) {//ask ma'am about this, change m * m <= x to m <= x-1 and about 
        // number 2147483647
        // and why in the result the numbers are not repeating like if i input 12 why is it not 2, 2, 3 
        if (x % m == 0) return 0;
    }
    return 1;
}

int main() {
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("The prime factors of %d are : \n",n);
    for (int i = 1 ; i <= n ; i++){
        if (is_prime(i)){
            if (n % i == 0)
            printf("%d , ",i);
            else continue;
        }
        }
    // if (is_prime(n)) printf("prime no.");
    // else printf("not a prime no.");
    return 0;
}