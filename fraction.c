#include <stdio.h>
#include "gcd.h"

int main() {
    int a, b;
    printf("Enter your fraction:\n");
    scanf("%d/%d", &a, &b);
    printf("your a and b are %d %d:\n", a, b);
    printf("the gcd is: %d\n", gcd(a,b));
    printf("In lowest haha term: %d/%d", a/gcd(a,b), b/gcd(a,b));
    
}