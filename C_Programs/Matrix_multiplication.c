/*
Date: 07/06/2021
write a program for matrix multiplication using array
*/

#include<stdio.h>

int main(){
	int mat1[10][10],mat2[10][10],mul[10][10];
	int row1,row2,col1,col2,i,j,k;
	
	printf("\nEnter the number of rows for matrix 1:");
	scanf("%d",&row1);
	
	printf("\nEnter the number of columns for matrix 1: ");
	scanf("%d",&col1);
	
	printf("\nEnter Elements in matrix 1:");
	for(i=0;i<row1;i++){
		for(j=0;j<col1;j++){
			scanf("%d",&mat1[i][j]);
		}
	}
	
	printf("\nMAtrix 1:\n\n");
	for(i=0;i<row1;i++){
		for(j=0;j<col1;j++){
			printf("%d\t",mat1[i][j]);
		}
		printf("\n");
	}
	printf("\n************************\n");
	
	printf("\nEnter the number of rows for matrix 2:");
	scanf("%d",&row2);
	
	printf("\nEnter the number of columns for matrix 2: ");
	scanf("%d",&col2);
	
	printf("\nEnter Elements in matrix 2:");
	for(i=0;i<row2;i++){
		for(j=0;j<col2;j++){
			scanf("%d",&mat2[i][j]);
		}
	}
	
	printf("\nMAtrix 2:\n\n");
	for(i=0;i<row2;i++){
		for(j=0;j<col2;j++){
			printf("%d\t",mat2[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	
	printf("\n*****************\n");
	printf("\nMultiplication of matrix 1 and matrix 2 is:\n");
	for(i=0;i<row1;i++){
		for(j=0;j<col2;j++){
			mul[i][j] = 0;
			for(k=0;k<col1;k++){
				mul[i][j] += mat1[i][k] * mat2[k][j];
			}
		}
			
	}
	
	for(i=0;i<row1;i++){
		for(j=0;j<col2;j++){
			printf("%d\t",mul[i][j]);
		}
		printf("\n");
	}
}
