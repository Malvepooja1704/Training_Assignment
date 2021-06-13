/*
Date: 02/06/2021
Write a program to check whether character is an alphabet or not
*/

#include<iostream>
using namespace std;


int main()
{
 	char ch;
 	cout<<"Enter Character:";
 	cin>>ch;
 	
 	if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z')){
 		cout<<ch<<" is an Alphabate";
	}
	else{
		cout<<ch<<" is not an Alphabate";
	}
 	
 
    return 0;
}
