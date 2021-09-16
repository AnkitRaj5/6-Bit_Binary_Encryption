#include<stdio.h>
#include<string.h>
void encription(char par);
int main(){
void encryption()
{
	char msg[250];
	char*p=msg;
	char val;
	int count;
	printf("\tENTER THE INPUT \n");
	gets(msg);
	while( *p != '\0' ){
		val = *p;
		encription(val);
		count++;
		p++;
	}
	printf("\n\tTHE LENGTH OF ENCRYPTION CODE IS  %d ",count*6);
return ;
}
void encription(char par)
	{
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
	}
	
	
}

