#include<stdio.h>
int main()
{	
	int number;
	printf("enter number\n");
	scanf("%d",&number);
	for(int i = 1; i < number; i++)
 	{
  	int prime = 0;
    	for (int j = 2; j <= i/2; j++)
   		{
  		if(i%j == 0)
  		{
     	prime++;
  	  	break;
		}
    	}
    if(prime == 0 && i != 1 )
    {
	printf("%d ", i);
    }  
 	}
	return 0;
}
