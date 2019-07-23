//DFA program that accepts two consequtive 0's of binary string.
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
					state='c';
				}
				else if(input[i]=='1')
				{
					state='a';
				}
				break;
			case 'c':
				if(input[i]=='0' || input[i]=='1'){
					state='c';
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
