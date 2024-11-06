#include <stdio.h>
#include <stdlib.h>
#define SIZE 50
int top=-1,i,s[30],size;
void push();
void pop();
void peek();
void display();



int main()
{
    int ch,elements,size,i;
	 printf("Enter the size of the stack:\n");
    scanf("%d",&size);
    printf("Enter the elements to the Stack:\n");
    for(i=0;i<size;i++)
    {
    scanf("%d",&elements);
    top++;
    s[top]=elements;
}

	printf("the stack is:\n");
    for(i=top;i>=0;i--)
    {
        printf("%d\n",s[i]);
    }


	do{
	printf("enter your choice :\n1.PUSH\n2.POP\n3.PEEK\n4.DISPLAY\n5.EXIT\n");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:push();
		break;
	case 2:pop(s,top,size);
		break;
	case 3:peek(s,top);
		break;
	case 4:display(s,top);
		break;
	case 5:exit (0);
		break;
	
	}}
	while (ch!=5);
	printf("invalid choice");
}



void push()
{
int pus;
printf("Enter a element to push:\n");
	scanf("%d",&pus);
	if(top==SIZE-1){

	printf("the stack is overflow");
	}
	else
	{
		
		top++;
		s[top]=pus;
		size++;
	}

	printf("the stack is:\n");
    for(i=top;i>=0;i--)
    {
        printf("%d\n",s[i]);
    }

}




 void pop()
{
	int i;
	printf("poping\n");
	if(top==-1)
	{
	printf("stack is empty");
	}
	else
	{
	top--;
	
	}
	
	printf("the stack is:\n");
    for(i=top;i>=0;i--)
    {
        printf("%d\n",s[i]);
    }
	



}


void peek(int s[],int top)
{
printf("the top element is \n");
if(top==-1)
{
printf("stack is empty");
}
else
{
printf("%d",s[top]);
}


}

void display(int s[],int top)
{
int i;

if(top==-1)
{
printf("stack is empty");
}
else
 {
printf("the stack is:\n");
    for(i=top;i>=0;i--)
    {
        printf("%d ",s[i]);
    }


}
}



