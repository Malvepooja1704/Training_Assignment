/*
Date: 11/06/2021
write a program to evaluate reverse polish notation of given string
*/

#include<iostream>
#include<stack>
#include<string.h>
using namespace std; 

int Rev_polish_note(string exp){
	stack<int> stk;
	
	for(int i=0;i<exp.length();i++){
		if(exp[i]>='0' && exp[i]<='9'){
			stk.push(exp[i] - '0');       //push operand onto stack
		}
		else{
			int x = stk.top();    //if exp contain operator then pop two ele from stack evaluate 
			stk.pop();            // push result on the stack
			
			int y = stk.top();
			stk.pop();
			
			if(exp[i] == '+'){
				stk.push(y+x);
			}
			else if(exp[i] == '-'){
				stk.push(y-x);
			}
			else if(exp[i] == '*'){
				stk.push(y*x);
			}
			else if(exp[i] == '/'){
				stk.push(y/x);
			}
		}
		
	}
	
	return stk.top();
}

int main(){
	string exp;
	
	cout<<"Enter Expression: ";
	getline(cin, exp);
	
	cout<<"Result of Exp: "<<Rev_polish_note(exp);
	
	return 0;
}
