/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

int main() {
   int no1, no2;
   int minimum(int a,int b);
   int maximum(int c,int d);
   int multiply(int e,int f);
  
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));
   return 0;
}

  int minimum(int a,int b)
   {
     if(a>b)
     min=b;
     else
     min=a;
       return min;
   }
   int maximum(int c,int d)
   {
     if(a>b)
     max=c;
     else
     max=d;
     return max;
   }
   int multiply(int e,int f)
   {
     ans=e*f;
     return ans;
   }
   