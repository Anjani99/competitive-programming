/*
Some prime numbers can be expressed as Sum of other consecutive prime numbers.
For example

5 = 2 + 3
17 = 2 + 3 + 5 + 7
41 = 2 + 3 + 5 + 7 + 11 + 13

Your task is to find out how many prime numbers which satisfy this property are present in the range 3 to N subject to a constraint that summation should always start with number 2.

Write code to find out number of prime numbers that satisfy the above mentioned property in a given range.

Input Format:

First line contains a number N
Output Format:

Print the total number of all such prime numbers which are less than or equal to N.
Constraints:
2<N<12,000,000,000
*/
#include<stdio.h>
int main()
{
  long int n, j, num, k = 0, i, a[199999], x=1, counter = 0, result;
  scanf("%ld", &num);
  if ( num > 1)
  {
  for(n=2;n<=num;n++)
  {
    for(j=2;j<=100;j++)
    {
     if(n%j==0)
     break;
    }
    if(j==n)
  {
      a[k]=n;
      k++;
  }
  }
result=a[0];
 while(x<n)
 {
     result=result+a[x];
     for(i=x+1;i<n;i++)
    {
        if(a[i] == result)
         {
             counter++;
         }
     }
     x++;
 }
 printf("%ld",counter);
}
 return 0;

}

