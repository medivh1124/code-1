#include<stdio.h>
int main(){
	int n=0;
	int number[4];
	
	for(int i=0;i<4;i++){
	scanf("%d",&number[i]);
	if(number[i]%2==0){
	n++;
	}
}
	printf("%d",n);
	return 0;
}
