#include<conio.h>
#include<stdio.h>
#define N 2
int main()
{
	int array[N];
	int odd[N];
	int even[N];
	int i,a=0,b=0,c=0;
	printf("Enter %d numbers" ,N);
	for(i=0;i<N;i++)
	{
		scanf("%d",&array[i]);
	}
	for(i=0;i<N;i++)
	{
		if(array[i]%2!=0)
		{
			odd[a]=array[i];
			a++;
		}
		else
		{
			even[b]=array[i];
			b++;
		}
	}
	for(i=0;i<N;i++)
	{
		if(even[i]<odd[i])
		{
			c=c+1;
		}
	}
	if(c>0)
	{
		printf("The number is oddheavy \n");
	}
	else
	{
		printf("The number is not oddheavy \n");
	}
	return 0;
}
