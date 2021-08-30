#include <stdio.h>
int main() {
  	double number,min=1.7E+308;
  	for(int i=1;i<=3;i++){
	scanf ("%lf",&number);
	
	if(number<min){
		  	min=number;
		  }
		  }
	  printf("%.2lf",min);

  return 0;
}
