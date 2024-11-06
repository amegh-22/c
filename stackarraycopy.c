
void peek(int s[],int top);
void display(int s[],int top);




	case 3:peek(s,top);
		break;
	case 4:display(s,top);
		break;
	case 5:exit (0);
		break;



       

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




	
