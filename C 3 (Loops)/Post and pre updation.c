#include <stdio.h>
int main(){
    //there are two types of updations, these are post and pre
    // post is denoted by, ex.  increment = x++ and decrement = x--
    // pre is denote by , ex. increment = ++x and decrement = --x
    // both post and pre updation do the same thing
    // the difference lies in the timing
    
    int x = 4,y,z;
    y = --x; //here first x = x - 1 is put then y = x - 1
    z = --x;
    printf("%d %d %d\n",x,y,z);
    int a = 4,b,c;
    b = a--; //here first b = a is put then a = a - 1
    c = a--;
    printf("%d %d %d\n",a,b,c);
    return 0;
}
// one more good example is as follows(gonna write only the main code)
// int p = 4,q = 3,r;
//     r = p---q;
//     printf("%d %d %d",p,q,r); RESULT : 3 3 1 
// and
// int p = 4,q = 3,r;
//     r = --p-q;
//     printf("%d %d %d",p,q,r); RESULT : 3 3 0
