/*
Date : 07/06/2021
Write a program t count frequency of word in given line
*/
#include<iostream>
#include<fstream>
#include<map>
#include<string>
#include<iomanip>
using namespace std;
 
typedef map<string,int> StrIntMap;

void count_freq(istream& in, StrIntMap& words){
	string str;
	
	while(in>>str){
		++words[str];
	}
}

int main(){
	string word;
    string filename;
    cout<<"\n Enter the filename: ";
    cin>>filename;
    ifstream inFile;
    inFile.open(filename);
    if (!inFile) {
        cout << "Unable to open file";
        exit(1); 
    }
    
    StrIntMap w;
    count_freq(inFile,w);
    
    cout<<"\nEnter Word to Search:";
    cin>>word;
    
    for(StrIntMap :: iterator p = w.begin(); p!= w.end(); ++p){
    	if(p->first == word){
                  cout << p->first << " occurred "<< p->second << " times.\n";
              }
	}
}
