#include<stdio.h>
#include<stdlib.h>
void main(){
	int  a[10],s1,i,n,ele,temp;
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
		  printf("enter the element to search:");
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
         
}
