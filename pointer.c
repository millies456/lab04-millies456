#include <stdio.h>
int main(){

   int a;
   int b;

   
    int *pA = &a;
int *pB = &b;
    a = 5;
    *pB = 7;
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", *pA);
    printf("%d\n", *pB);
    return 0; 
}
