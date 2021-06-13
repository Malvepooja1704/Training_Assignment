/*
Date: 02/06/2021
Find total occurrences of each digits (0-9) using function
*/
#include<iostream>
using namespace std;

int find_occurence(long long int num,int digit){
	int occ=0, remainder;
	
	while(num){
		remainder = num%10;
		if(remainder==digit){
			occ++;
		}
		num = num/10;
	}
	
	cout<<"Occurence of "<<digit<<" in number "<<occ<<endl;
	
}

int main(){
	long long int num,digit;
	
	cout<<"Enter Number: ";
	cin>>num;
	
	for(int i=0;i<=9;i++){
		find_occurence(num , i);	
	}
}


