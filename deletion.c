#include<stdio.h>
#include<stdlib.h>
void main(){
	int  a[10],s1,i,n,pos;
	printf("enter the size of array:");
	scanf("%d",&s1);
	printf("enter the elemnets of array:\n");
	for(i=0;i<s1;i++)
		{
			scanf("%d",&a[i]);
		}
			printf("the array is:");
	for(i=0;i<s1;i++)
		{

			
		
			printf("%d\t",a[i]);

		
		}

	printf("\n");
    printf("enter the positrion to delete:");
    scanf("%d",&pos);
	if(pos>s1 || pos<1)
	{
		printf("invalid position");
	}
	else
	for(i=pos-1;i<=s1-1;i++)
	{
		a[i]=a[i+1];
	}
	s1--;
	printf("the array is:");
	for(i=0;i<s1;i++)
		{

			
		
			printf("%d\t",a[i]);

		
		}


}