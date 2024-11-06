#include<stdio.h>
#include<stdlib.h>
void main(){
	int  a[10],s1,i,j,n,ele,temp1,temp2;
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
        
		for(i=0;i<s1;i++)
        {
            for(j=i+1;j<s1;j++)
        
		{
		if(a[i]>a[j])
		{
        
            temp1=a[j];
			a[j]=a[i];
			a[i]=temp1;

		}

		}
        }
        
		 printf("the sorted array in ascending order:");
	for(i=0;i<s1;i++)
		{

			
		
			printf("%d\t",a[i]);

		
		}
}
	
