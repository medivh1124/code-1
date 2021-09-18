#include <stdio.h>
int main()
{
	int number;
 	printf("Enter a number\n");
    scanf("%d", &number);
 	if((number&1)==0){printf("%d is Even NUmber",number);}
    else{printf("%d is Odd Number", number);}
  
  	return 0;
}

