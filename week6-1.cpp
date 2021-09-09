#include<stdio.h>  
int fac(int);
int x,start=1,number;  
int main()    
{    
  	scanf("%d",&number);    
 	printf("%d",fac(number));    
	return 0;  
}    

int fac(int x)
{
	for(int i=1;i<=number;i++){    
      start=start*i;    
	  }
	  return start;
}

