#include<stdio.h>
#include<conio.h>
#include<string.h>
	void get_prefix(char[]);
	void get_suffix(char[]);
	void get_substring(char[],int,int);
	
int main()
{
	char string[20];
	int x,y;
	printf("Enter a string \n");
	gets(string);
	printf("Enter a range");
	scanf("%d %d",&x,&y);
	get_prefix(string);
	get_suffix(string);
	get_substring(string,x,y);
	return 0;
}
	void get_prefix(char string[20])
	{
		int i,j,k;
		char prefix[20];
		for(i=strlen(string);i>0;i--)
		{
			k=0;
			for(j=0;j<i;j++)
			{
				prefix[j]=string[k];
				k++;
			}
			prefix[j]='\0';
			printf("\n %s  \n",prefix);
		}
	}
	void get_suffix(char string[20])
	{
		int i,j,k;
		char suffix[20];
		for(i=0;i<=strlen(string);i++)
		{
			k=i;
			for(j=0;j<strlen(string);j++)
			{
				suffix[j]=string[k];
				k++;
			}
			suffix[j]='\0';
			printf("\n %s \n",suffix);
		}
	}
	void get_substring(char string[20],int a,int b)
	{
		char substring[20];
		int i,j,k;
		while(a<0 || b>strlen(string))
		{
			printf("Re-enter ranges");
			scanf("%d%d",&a,&b);
		}
		k=0;
		for(i=a;i<=b;i++)
		{
			substring[k]=string[i];
			k++;
		}
		substring[k]='\0';
		printf("%s",substring);
	}

