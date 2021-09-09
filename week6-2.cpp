#include<stdio.h>  
int number;  
int fac(int);


int main()  
{
  scanf("%d", &number);     
  printf("%d", fac(number));  
  return 0;  
}  


int fac(int number)
{  
  if (number == 0)  
    return 1;  
  else  
    return(number * fac(number-1));  
}  
