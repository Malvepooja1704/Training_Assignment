/*
Date: 02/06/2021
Write a program to convert a number to words
*/

#include<iostream>

using namespace std;

string one[] = {"", "one ", "two ", "three ", "four "," five ",
				 "six ", "seven ", "eight ", "nine ", "ten ", "eleven ", "twelve ", "thirteen ",
				  "fourteen ","fifteen ", "sixteen ","seventeen ", "eighteen ", "nineteen "};
			
string ten[] = {"", "", "twenty ", "thirty ", "fourty ","fifty ","sixty ","seventy ",
				"eighty ","ninety "};
				
string num_to_word(int num,string s){
	string str="";
	
	if(num>19){
		str += ten[num/10] + one[num%10];
	}
	else{
		str += one[num];
	} 	
	
	if(num){
		str += s;
	}
	return str;
}




string conv_num_to_word(long long int num){
	string result;
	
	result += num_to_word((num/100000000000000000),"shankh ");
	
	result += num_to_word(((num/1000000000000000)%100),"padma ");
	
	result += num_to_word(((num/10000000000000)%100),"nil ");

	result += num_to_word(((num/100000000000)%100),"kharab ");

	result += num_to_word(((num/1000000000)%100),"arab ");
	
	result += num_to_word(((num/10000000) %100),"crore ");

	result += num_to_word(((num/100000) % 100),"lakh ");
	
	result += num_to_word(((num/1000) % 100),"thousand ");
	
	result += num_to_word(((num/100)%10),"hundred ");
	
	if(num>100 && num%100){
		result += "and ";
	}
	result += num_to_word((num%100), "");
	
	return result;
}	

int main(){
	long long int num;
	
	cout<<"Enter Number:";
	cin>>num;
	
	cout<<conv_num_to_word(num)<<endl;
	
}							
