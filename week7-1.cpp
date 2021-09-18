#include <stdio.h>
#include <string.h>
int main()
{
	double input,number,free=0;
	printf("ENTER A NUMBER\n");
	scanf("%lf",&input);
	number =input;
  
  
  while(number>1)
 	{
	number-=2;//printf("%lf\n",number);
 	if(number==1){printf("%lf is Odd Number",input);}
  	else if(number==0){printf("%lf is Even Number",input);}
	}
  
  while(number<1)
 	{
 	number+=2;//printf("%lf\n",number);
 	if(number==1){printf("%lf is Odd Number",input);}
  	else if(number==2){printf("%lf is Even Number",input);}
	}
return 0;
}
