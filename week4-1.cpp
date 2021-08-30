#include <stdio.h>
int main() {
  	double number,max=0;
  	for(int i=1;i<=3;i++){
	scanf ("%lf",&number);
	if(number>max){
		  	max=number;
		  }
		  }
	  printf("%.2lf",max);

  return 0;
}
