/*
Date : 07/06/2021
Write a menu driven  program for book management system 
*/

#include<bits/stdc++.h>
using namespace std;

void creat_book();
void insert_book();
void remove_book();
void search_book();
void lists_all();

struct book{
	int book_id;
	char book_name[20];
	char author[20];
	float cost;
	
	struct book *next;
}*head;

int main(){
	head = NULL;
	int choice;
	cout<<"\n*************BOOK MANAGEMENT SYSTEM***************\n";
	do{
		cout<<"\n1. Create List";
		cout<<"\n2.Insert a new Book";
		cout<<"\n3.Remove a Book";
		cout<<"\n4.Search for a Book";
		cout<<"\n5.Lists all the books";
		cout<<"\nExit";
		cout<<"\nEnter Your Choice: ";
		cin>>choice;
		
		switch(choice){
			case 1: creat_book();
					break;
				
			case 2: insert_book();
					break;
			
			case 3: remove_book();
					break;
					
			case 4: search_book();
					break;
				
			case 5: lists_all();
					break;
			
			case 6: exit;								
		}
	}while(choice !=6);
	
	return 0;
}

void creat_book(){
	struct book *temp;
	
	temp = new book();
	cout<<"Enter ID of book: ";
	cin>>temp->book_id;
	cout<<"Enter name of book: ";
	cin>>temp->book_name;
	cout<<"Enter Name of Author: ";
	cin>>temp->author;
	cout<<"Enter cost of book:";
	cin>>temp->cost;
	
	temp->next = NULL;
	if(head==NULL){
		head = temp;
	}
	else{
		cout<<"Head is already created!";
	}
}

void insert_book(){
	struct book *temp,*p;
	temp = new book();

cout<<"Enter ID of book: ";
	cin>>temp->book_id;
	cout<<"Enter name of book: ";
	cin>>temp->book_name;
	cout<<"Enter Name of Author: ";
	cin>>temp->author;
	cout<<"Enter cost of book:";
	cin>>temp->cost;
	
	temp->next = NULL;
	p = head;
	while(p->next!=NULL){
		p=p->next;
	}	
	p->next=temp;
}

void search_by_id(){
	int id,flag=0;
	struct book *p;
	cout<<"Enter Book ID to search: ";
	cin>>id;
	
	p = head;
	while(p!=NULL){
		if(id==p->book_id){
			flag=1;
			break;
		}
		p=p->next;
	}
	if(flag==0){
		cout<<"\nRecord Not Found!!";
	}
	else{
		cout<<"\nRecord Found!";
	}
}

void search_by_name(){
	int flag=0;
	char name[20];
	struct book *p;
	cout<<"Enter book name to search:";
	cin>>name;	
	p = head;
	while(p!=NULL){
		if(strcmp(p->book_name,name)==0){
			flag=1;
			break;
		}
		p=p->next;
	}	
	if(flag==0){
		cout<<"\nRecord Not found!";
		
	}
	else{
		cout<<"\nRecord Found!";
	}
}


void search_book(){
	int ch;
	do{
		cout<<"\n1.Search by ID";
		cout<<"\n2.Search by Name";
		cout<<"\n3.Exit from search";
		cout<<"\nEnter your Choice:";
		cin>>ch;
		switch(ch){
			case 1: search_by_id();
					break;
			case 2: search_by_name();
					break;
			case 3: exit;				
		}
	}while(ch!=3);
}


void remove_book(){
	int search_id;
	struct book *p,*q;
	p=head->next;
	q=head;
	cout<<"\nEnter Book ID of book to be deleted: ";
	cin>>search_id;
	
	while(p!=NULL){
		if(search_id == p->book_id){
			q->next = p->next;
			free(p);
			cout<<"\nRecord Deleted Successsfully for ID : "<<search_id;
			return;
		}
		else{
			p=p->next;
			q=q->next;
		}
	}	
	
}

void lists_all(){
	struct book *p;
	p=head;
	cout<<"\n************BOOK LIST**********\n\n";
	cout<<"ID \t BOOK NAME \t AUTHOR \t COST \n";
	while(p != NULL){
		cout<<p->book_id<<"\t";
		cout<<p->book_name<<"\t";
		cout<<p->author<<"\t";
		cout<<p->cost<<"\n";
		p=p->next;
	}
	cout<<"\n";
}
