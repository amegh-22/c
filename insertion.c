#include<stdio.h>
#include<stdlib.h>
void insert();
void delete();
void search();
void sort();

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
    void insert()
    {
    int ele,pos;
    printf("enter the element to insert:");
    scanf("%d",&ele);
    printf("enter the positrion to insert:");
    scanf("%d",&pos);
    if (pos>s1 || pos<0)
    {
    printf("invalid position");
    }
    else
    {
        for(i=s1-1;i>=pos-1;i--)
        {
            a[i+1]=a[i];
        }    
            a[pos-1]=ele;
             s1++;
    }
    printf("the array is:");
	for(i=0;i<s1;i++)
		{

			
		
			printf("%d\t",a[i]);

		
		}
    }
}
	