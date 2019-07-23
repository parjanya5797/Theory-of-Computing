//DFA program where 0 is always followed by 1 string.
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	int i;
	char state='a',input[50];
	printf("Enter the string:\n");
	gets(input);
	for(i=0;i<strlen(input);i++){
		switch(state){
			case 'a':
				if(input[i]=='0')
				{
					state='b';
				}
				else if(input[i]=='1')
				{
					state='a';
				}
				break;
			case 'b':
				if(input[i]=='0')
				{
					state='d';
				}
				else if(input[i]=='1')
				{
					state='c';
				}
				break;
			case 'c':
				if(input[i]=='0'){
					state='b';
				}
				else if(input[i]=='1')
				{
					state='d';
				}
				break;
			case 'd':
				if(input[i]=='0'){
					state='d';
				}
				else if(input[i]=='1')
				{
					state='d';
				}
				break;
		}
	}
	if(state=='c'){
			printf("\nAccepted.");
		}
		else{
			printf("\nRejected.");
		}
		return 0;
}
