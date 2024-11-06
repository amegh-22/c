#include<stdio.h>
#include<stdlib.h>
#define SIZE 20
int s1,a[10];


void main(){
	int  a[10],i,ch,ele,pos,temp1,j;
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
    while(1)
    {
    printf("\nenter your choice:\n1.insert\n2.delete\n3.search\n4.sort\n5.exit\n ");
    scanf("%d",&ch);
    

    switch(ch)
    {
         case 1:


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
                  break;



        case 2:
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
                 break;


        case 3: printf("enter the element to search:");
         scanf("%d",&ele);
		 for(i=0;i<s1;i++)
		 {
		
            if(a[i]==ele)
            {
                printf("element found at index %d",i);
              break;
            }
         }
   
			if(a[i]!=ele)
            {
                printf("element not found");
            }
         
                 break;

                 
        case 4: 

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
                 break;
        case 5:
                exit(0);
        default:printf("inalid choice");
    }
}
}








	