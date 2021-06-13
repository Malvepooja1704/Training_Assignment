/*
Date: 02/06/2021
Write a program to print all Perfect numbers between 1 to n.
*/

#include<stdio.h>

int main(){
	int num ,sum, i,j;
	
	printf("\nEnter the range n:");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++){
		sum=0;
		for(j=1;j<=i/2;j++){
			if(i%j == 0){
				sum+=j;
			}
		}
		if(sum == i){
			printf("%d\t",i);
		}
	}	
	
}
