#include <stdio.h>
int main()
{	double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a<b&&a<c){
    	printf("%.2lf",a);
	}
	if(b<a&&b<c){
    	printf("%.2lf",b);
	}
	if(c<a&&c<b){
    	printf("%.2lf",c);
	}

return 0;
}
