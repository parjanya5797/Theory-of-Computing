#include<stdio.h>
#include<conio.h>
#include<string.h>
char input[20];
int l; //store length of string
int flag; //to decide accept or rejection
void q2(int i)
{
 	if(input[i]=='\0')
 	{
 		flag = 1;
	}
}

void q1(int i)
{
	if(i<l)
	{
		if(input[i] == '1')
		{
			++i;
			q2(i);
		}	
	}
}
void q0(int i)
{
	if(i<l)
	{
		int k=i;
		if(input[i] == '0')
		{
			k++;
			q0(k);
			q1(k);
		}
		else
		{
			if(input[i] == '1')
			{
				i++;
				q0(i);
			}
		}
	}
}

int main()
{
	printf("Enter a string \n");
	gets(input);
	l = strlen(input);
	int i = 0;
	flag = 0;
	q0(i);
	if(flag==1)
	{
		printf("Accepted");
	}
	else
	{
		printf("Rejected");
	}
	return 0;
}
