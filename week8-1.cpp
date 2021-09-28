#include <stdio.h>  
#include <string.h>  
int main()  
{  
    char string[40];  
    printf (" Enter string ");  
    scanf ("%s", &string);  
    printf ("%s", strrev(string));  
    return 0;  
}  
