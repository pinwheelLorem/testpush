#include <stdio.h>  
#include "gcd.h"

int gcd(int a,int b)
{  
 
 int r, a1, b1; 

 if (a > b) {
   a1 = a;
   b1 = b;
 }
 else{ 
    a1 = b;
    b1 = a;
 }


 while (b1 != 0){
   r = a1 % b1;
   a1 = b1;
   b1 = r;
   
 } 
  return a1;
}