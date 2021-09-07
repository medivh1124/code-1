#include<stdio.h>
int main()
{
 int number[4];
 int n = 0;
 int j=0;
 while( j < 4)
 {	scanf("%d", &number[j]);
    if(number[j] % 2 == 0)
    {
 	n++;
    }
    j++;
 }
  
 printf(" %d ", n);
 
 return 0;
}
