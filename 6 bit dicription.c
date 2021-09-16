#include<stdio.h>
#include<stdlib.h>
#include<process.h>
#include<string.h>
#define max_msg 250
void ecryptioninput();
void compare(int value);
int power(int pow);
void breakline();
void encryption();
void encrypt(char par);
void decryption();
void decrypt(int start,int last);
void starter();
int msg[1500];
int choice;
char str[max_msg];
char *p = str;
int main(){
	starter();
	while(1)
	{
		printf("\tENTER YOUR CHOICE: ");
		scanf(" %d",&choice);
		switch(choice){
			case 1 :
						encryption();
						break;
			case 2 :    
						decryption();
						break;
			case 0 :    
						exit(0);
						break;				
			default  :
						printf("\n");
						system("color 01");
						printf("\t\t\t\t\t    WRONG CHOICE \n");
						printf("\n");
						breakline();
						printf("\n");
						system("pause");
						system("cls");
						starter();
						break;		
		}		
	}
	return 0;
}

void breakline(){
	int i=0;
	for(;i<120;i++)
	printf("~");
	printf("\n");
	return ;
}

void encryption(){
	char val;
	int count=0;
	system("color 05");
	system("cls");
	printf("\n\t\t\t\t\t    ENCRYPTION IS WORKING \n");
	printf("\n");
	breakline();
	printf("\n");
	ecryptioninput();
	
	while( *p != '\0' ){
		val = *p;
		encrypt(val);
		count++;
		p++;
	}
	printf("\n\tTHE LENGTH OF ENCRYPTION CODE IS  %d ",count*6);
	printf("\n");
	printf(" \n");
	system("pause");
	system("cls");
	starter();
return ;
}
void ecryptioninput(){
		printf("\n\tENTER THE MESSAGE TO ENCRYPT \n");
		
	return ;
}
void encrypt(char par){
		int i,up,down,temp;
		char arr[100];
		int array[100];
		arr[10]='a',arr[11]='b',arr[12]='c',arr[13]='d',arr[14]='e',arr[15]='f',arr[16]='g',arr[17]='h',
	    arr[18]='i',arr[19]='j',arr[20]='k',arr[21]='l',arr[22]='m',arr[23]='n',arr[24]='o',arr[25]='p',
	    arr[26]='q',arr[27]='r',arr[28]='s',arr[29]='t',arr[30]='u',arr[31]='v',arr[32]='w',arr[33]='x',
	    arr[34]='y',arr[35]='z',arr[36]=' ';
	    char lettr = par;
	   
	    for(i=10;i<37;i++)
	    {
	    	temp=i;
			 if(lettr == arr[i]){	 
				   up=0;
			 if(temp>=32&&temp<36)
			    printf("%c",array[down]);
			 if(temp<32&&temp>=16)
				printf(" 0 %c", array[down]);
			 if(temp>=10&&temp<16)
				printf(" 0  0 %c", array[down]);
				while(temp>0)
				{ 
					array[up] = temp % 2;
					temp= temp/2;	
						up++;
				}
				for(down=up-1;down>=0;down--){
				printf(" %d ",array[down]);
				}
					printf("\n");
			}
			
		}
		return ;
	}
					
void decryption(){
	int length,start=0,last=6;
	int i;
	system("color 03");
	system("cls");
	printf("\n\t\t\t\t\t    DECRYPTION IS WORKING \n");
	printf("\n");
	breakline();
	printf("\n");
	printf("\tENTER THE 6-BIT BINARY ENCRYPTED MESSAGE LENGTH \n");
	scanf(" %d",&length);
	printf("\tENTER THE 6-BIT BINARY MESSAGE ONE BY ONE \n");
	for(i=0;i<length;i++)
	scanf("%d",&msg[i]);
	while(start != length){
		decrypt(start,last);
		start=last;
		last=last+6;
	}
	printf("\n");
	system("pause");
	system("cls");
	starter();
	return;
}
void decrypt(int start,int last){
	int i,value=0,j=5;
	for(i=start;i<last;i++){
		value=value+msg[i]*power(j);
		j--;
	}
	j=5;
	compare(value);
	return;
}

int power(int pow){
	int i=0,ans=1;
	for(i=0;i<pow;i++)
	{
		ans=ans*2;
	}
	return ans;
}
void compare(int value){
	int i;
	char arr[36];
	arr[10]='a',arr[11]='b',arr[12]='c',arr[13]='d',arr[14]='e',arr[15]='f',arr[16]='g',arr[17]='h',arr[18]='i',arr[19]='j',arr[20]='k',arr[21]='l',arr[22]='m',
	arr[23]='n',arr[24]='o',arr[25]='p',arr[26]='q',arr[27]='r',arr[28]='s',arr[29]='t',arr[30]='u',arr[31]='v',arr[32]='w',arr[33]='x',arr[34]='y',arr[35]='z',arr[36]=' ';
		for(i=10;i<37;i++){
		if(i==value){
			printf("%c",arr[i]);
		}
	}
	return ;
}
void starter(){
		printf("\n");
		system("color 0A");
		printf("\t\t\t\t\t    WELCOME TO 6-BIT MESSAGE ECNRYPTION \n");
		printf("\n");
		breakline();
		printf("\n");
		printf("\tPRESS 1 TO ENCRYPT THE MESSAGE \n");
		printf("\n");
		printf("\tPRESS 2 TO DECRYPT THE MESSAGE \n");
		printf("\n");
		printf("\tPRESS 0 TO EXIT FROM PROGRAM \n");
		printf("\n");	
	return;
}
