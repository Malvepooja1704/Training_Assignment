/*
Date: 07/06/2021
Check whether the given string is palindrome or not.
*/

#include<stdio.h>
#include<string.h>

int main(){
	char str[30];
	int i,len;
	int flag=0;
	
	
	printf("\nEnter a String: ");
	scanf("%[^\n]",str);
	
	len = strlen(str);

	for(i=0;i<len;i++){
		if(str[i] != str[len-i-1])
			flag=1;
	}
	
	if(flag){
		printf("The given string is not palindrome!");
	}
	else{
		printf("The given string is palindrome");
	}
}
