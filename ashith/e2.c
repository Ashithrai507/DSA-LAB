#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	int i,j,k;
	char *text=(char*)malloc(sizeof(text));
	char *pat=(char*)malloc(sizeof(pat));
	char *rep=(char*)malloc(sizeof(rep));

	printf("Enter the Text:");
	scanf(" %[^\n]",text);
	printf("enter the pattern");
	scanf(" %[^\n]",pat);
	printf("enter the replace string");
	scanf(" %[^\n]",rep);

	int textlength=strlen(text);
	int patlength=strlen(pat);
	int replength=strlen(rep);

for(i=0;i<=textlength-patlength;i++)
{
	for(j=0;j<patlength;j++)
	{
		if(text[i+j]!=pat[j])
		{
			break;
		}	
	}
	
	if(j==patlength)
	{
		printf("Position id %d\n",i);
		break;
	}
}
if(replength==patlength)
{
	for( k=0;k<replength;k++)
	{
		text[i]=rep[k];
		i++;
	}
	printf("\nUpdate Text is:%s",text);
}
else
{	
	printf("Not possible to replace the string");
}
}

