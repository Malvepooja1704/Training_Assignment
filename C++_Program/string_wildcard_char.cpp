/*
Date : 11/06/2021
Write a program for a strin Contain wildcard character. return the pattern.
*/

#include<iostream>
#include<string.h>
using namespace std;

void string_comparison(string str, string pattern){
	int s,p,flag=0;
	
	int s_len = str.length();
	int p_len = pattern.length();
	
	for(s=0;s<s_len;){
		string str2="";
		for(p=0;p<p_len;){
			if(str[s]==pattern[p]){
				str2 += str[s];
				s++;
				p++;
			}
			else if(pattern[p]=='?'){
				flag=1;
				str2 += str[s];
				s++;
				p++;
			}
			else{
				if(s<s_len){
					s++;
					p=0;
					str2="";
				}
				else{
					exit(1);
				}
			}
		}
		if(flag==1){
			cout<<str2<<endl;
		}
		else{
			cout<<"";
		}
		
	}	
	
}

int main(){
	string str, pattern;
	cout<<"Enter String: ";
	cin>>str;
	cout<<"Enter Pattern: ";
	cin>>pattern;
	

	string_comparison(str,pattern);
	
	return 0;
}
