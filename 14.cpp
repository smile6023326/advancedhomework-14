#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
	
	int length;//字串長度變數 
	int i;//loop
	char input[]="I $am 5a$ go68od#@$ st-ude[nt].";
	char *check;
	
	length=strlen(input);
	check=input;
	//檢查字串 
	for(i=0;i<length;i++){
		if(*(check+i)<122&&*(check+i)>=96){
			printf("%c", *(check+i));
		}
		else if(*(check+i)<91&&*(check+i)>64){
			printf("%c", *(check+i));
		}
		else if(*(check+i)==32){
			printf("%c", *(check+i));
		}
	}
	printf("\n\n");
	system("pause");
	return 0;
} 
