/*
Date : 11/06/2021
Write a program to geenrate all the permutations for given array of elements
*/

#include<iostream>
using namespace std;

void print_array(int arr[], int n){
	for(int i=0;i<n;i++){
		cout<<"Permutations of Given array is: ";
		cout<<arr[i]<<"\t";
	}
	printf("\n");
}

void swap(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void permute(int *arr, int start, int end){
	if(start==end){
		print_array(arr, end+1);
		return;
	}
	for(int i=start;i<=end;i++){
		swap((arr+i), (arr+start));
		permute(arr, start+1, end);
		swap((arr+i), (arr+start));
	}
}

int main(){
	int n;
	cout<<"Enter The Size of Array: ";
	cin>>n;
	int arr[n];
	cout<<"Enter Elements: ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	permute(arr, 0 , n-1);p[]
	return 0;
}
