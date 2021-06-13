/*
Date: 02/06/2021
write a program to count the number of digits in a given integer
*/

#include<stdio.h>
int main(){
	long long int num;
	int count=0;
	
	
	printf("\nEnter Number: ");
	scanf("%d",&num);
	
	while(num != 0){
		num = num/10;
		count++;
	}
	
	printf("\nCount of given number is: %d",count);
	
	return 0;
}
