//DFA program that accepts two consequtive 0's of binary string.
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	int i;
	char state='0',input[50];
	printf("Enter the string:\n");
	gets(input);
	for(i=0;i<strlen(input);i++){
		switch(state){
			case '0':
				if(input[i]=='a')
				{
					state='1';
				}
				else if(input[i]=='b')
				{
					state='3';
				}
				break;
			case '1':
				if(input[i]=='a')
				{
					state='2';
				}
				else if(input[i]=='b')
				{
					state='1';
				}
				break;
			case '2':
				if(input[i]=='a'){
					state='2';
				}
				else if(input[i]=='b')
				{
					state='1';
				}
				break;
			case '3':
				if(input[i]=='a' || input[i]=='b'){
					state='3';
				}
				break;
				
		}
	}
	if(state=='2'){
			printf("\nAccepted.");
		}
		else{
			printf("\nRejected.");
		}
		return 0;
}
