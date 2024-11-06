#include<stdio.h>
#include<stdlib.h>
void main(){
	int  a[10],s1,i,n,ele,pos;
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
    printf("enter the element to insert:");
    scanf("%d",&ele);
    printf("enter the positrion to insert:");
    scanf("%d",&pos);
    if (pos>s1-1 && pos<0)
    {
    printf("invalid position");
    }
    else
    {
        for(i=pos-1;i<s1-1;i--)
        {
            a[i]=a[i+1];
            a[pos]=ele;
        }
        s1++;
    }
    printf("the array is:");
	for(i=0;i<s1;i++)
		{

			
		
			printf("%d\t",a[i]);

		
		}
}
	