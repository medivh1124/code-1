#include<stdio.h>
int main()
{	
	int number,i=1,j;
	printf("enter number\n");
	scanf("%d",&number);
	while(i<number)
	{
	int prime =0;
	j=2;
	while(j<i/2)
	{
	if(i%j==0){prime++; break; }
	j++;
	}
	if(prime==0&&i!=1){printf("%d ",i);	}
	i++;
	}
	return 0;
}
