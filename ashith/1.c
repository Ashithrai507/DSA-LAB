#include<stdio.h>
#include<stdlib.h>
struct day
{
char* dayname;
int date;
char* act;
};
struct day* createday()
{
	struct day* newday = (struct day*)malloc(sizeof(struct day));
	newday->dayname=(char*)malloc(sizeof(char));
	newday->act=(char*)malloc(sizeof(char));
	
	printf("Enter the day name");
	scanf("%s",newday->dayname);
	printf("Enter the date");
	scanf("%d",&(newday->date));
	printf("Enter the activity");
	scanf(" %[^\n]",newday->act);
	
	return newday;
}
void read(struct day* calender[],int size)
{
	for(int i=0;i<size;i++)
	{
		printf("enter the details for day %d:\n",i+1);
		calender[i]=createday();
	}
}

void display(struct day* calender[],int size)
{
	printf("\n week's activity details:\n");
	for(int i=0;i<size;i++)
	{
		printf("day %d:\n",i+1);
		printf("day name: %s\n",calender[i]->dayname);
		printf("date: %d\n",calender[i]->date);
		printf("Activity description: %s\n",calender[i]->act);
		printf("\n");
	}
}			
void freememory(struct day* calender[],int size)
{
	for(int i=0;i<size;i++)
	{
		free(calender[i]->dayname);
		free(calender[i]->act);
		free(calender[i]);
	}
}
int main()
{ 
struct day* week[7];
read(week,7);
display(week,7);
freememory(week,7);

return 0;
}

