#include<stdio.h>
#include<stdlib.h>
int size,,f,top=-1,num,k,i,stack[6],rev[6];

void push();
void pop();
void display();
int pali();


void main()
{

printf("enetr the size");
scanf("%d",&size);
printf("---MENU---\n 1:PUSH \t 2:POP\t3:DISPLAY\t4:CHECK for palindrome\t5:EXIT");
while(1)
 {
  printf("enter the choice");
  scanf("%c",&choice);
  switch(choice)
   {
 	case'a':push();
 		break;
 	case'b':pop();
 		break;
 	case'c':display();
 		break;
 	case'd':f=pali();
 	if(f==1)
 	 	printf("It's palindrome");
	else
		printf("not a palidrome");		 	
 		break;
 	case'e':exit(0);
 		default:printf("Wrong choice....\n");				
   } 
 }
}
void push()
{
if(top==(size-1))
	{
		printf("stack is overflow");
	}
else
	{
		printf("enter the number to be pushed");
		scanf("%d",&num);
		top=top+1;
		stack[top]=num;
	}
}
void pop()
{
if(top==-1)
 {
	printf("Stack is underflow");
 }
else
 {
	num=stack[top];
	printf("Poped element is %d\n",num);
	top--;		
 }
}
void display()
{
	if(top==-1)
	{
		printf("Stack is emplty\n");
	}
	else
	{
		printf("stack contents---\n");
		for(i=top;i>=0;i--)
		{
			printf("%d\n",stack[i]);
		}		
	}
}
int pali()
{
	int flag=1;
	for(i=top;i>=0;i--)
	{
		rev[k++]=stack[i];
	}
	for(i=top;i>=0;i--)
	{
		if(stack[i]!=rev[--k])
		{
			flag=0;
		}
		
	}
	return flag;	
}
