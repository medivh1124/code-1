#include<stdio.h>
int main()
{float heights[10];
for(int i=0;i<10;i++){
	printf("insert height(cm):");
	scanf("%f",&heights[i]);
}
    float means;
    means = heights[0]+heights[1]+heights[2]+heights[3]+heights[4]+heights[5]+heights[6]+heights[7]+heights[8]+heights[9];
	printf("%f",means/10);
	
	return 0;
}
