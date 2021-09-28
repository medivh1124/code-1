#include <stdio.h>  
#include <string.h>  
int main()  
{  
    char str[50]; 
    printf ("Enter string: ");  
    scanf("%s",str); 
    int i,temp;  
	for (i = strlen(str)-1; i >= 0; i--)  
    {  
    printf("%c",str[i]) ;
    }  
    return 0;
    }  
