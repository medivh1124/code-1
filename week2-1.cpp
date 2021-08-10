#include<stdio.h>
double a,b,c;

int Max(double a,double b,double c){


if (a>b&&a>c)
{
printf("%lf",a);
}
else if (b>a&&b>c)
{
printf("%lf",b);
}

else
{
printf("%lf",c);
}
}
int main(){
scanf("%lf %lf %lf",&a, &b,&c);
Max(a,b,c) ;



return 0;}
