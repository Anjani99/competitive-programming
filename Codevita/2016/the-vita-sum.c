#include <stdio.h>
 
long factorial(int);
long find_ncr(int, int);
int main()
{
   long long N, r, k;
   long ncr;
   long int pull = 0;
   int a[1];
   int i = 0;
   while (i < 2 && scanf("%d", &a[i]) == 1)
   i++;
   k = a[1];
   N = a[0];
   if( N >= k && N >= 0 )
   { 
   for(i = 0; i < k; i=i+2)
   {
   pull = pull + find_ncr(N, i);
   }
   }
   printf("%li", (pull-3));
   return 0;
}
 
long int find_ncr(int n, int r) {
   long long result1;
 
   result1 = factorial(n)/(factorial(r)*factorial(n-r));
 
   return result1;
}
 
long int factorial(int n) {
   int c;
   long long result = 1;
 
   for (c = 1; c <= n; c++)
      result = result*c;
 
   return result;
}
