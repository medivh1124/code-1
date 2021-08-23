#include<stdio.h>

main()
{
int StudentHeight[10],i;
float Means;
for(i=0;i<10;i++)
{
    printf("Enter heights(cm):");
    scanf("%d",&StudentHeight[i]);
}
for(i=0;i<10;i++){
	printf("%d ",StudentHeight[i]);
} 
for(i=0;i<10;i++){
	Means += StudentHeight[i];
	
}
printf("\nStudentHeight's means : %f",Means/10);
return 0;
}
