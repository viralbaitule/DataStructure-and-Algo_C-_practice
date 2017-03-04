#include "iostream"
#include <map>
#include <vector>
#include "string"
#include <iomanip>
using namespace std;

struct Node{
	int data;
	Node * next;
	Node * prev;
};

void insert_at_begining(Node **head , int num){

}

void insert_at_position (Node **head){

}

void delete_at_positon(Node **head){

}

void reverseprint(Node * head){
	
}

void printlist(Node *head){
	Node * temp=head;
	while (temp!=NULL){
		cout<<temp->data<<"	";
		temp=temp->next;
	}
}

int main(int argc, char * agrv[]){
	Node * head=NULL;
	int choice;
	int data[]={3,4,1,6,8,9};
	map< int ,string> operations;	
	operations[1]="insert_at_begining";
	operations[2]="insert_at_position";
	operations[3]="delete_at_positon";
	operations[4]="reverse print";
	operations[5]="print";
	operations[10]="Exit";
	for (int i=0;i<6;i++){
		Node * newnode= new Node();
		newnode->data=data[i];
		newnode->next=head;
		newnode->prev=NULL;
		head=newnode;
	}
	while (choice!=10){
		cout<<"List : ";
		printlist(head);
		cout<<endl;
		cout<<"Enter the number for the Operation \n";
		cout<<setfill('-')<<setw(31)<<"-"<<endl;
		cout<<"|"<<setfill(' ')<<setw(8)<<left<<"Option"<<"|"<<setfill(' ')<<setw(20)<<left<<"Operations"<<"|"<<endl;
		cout<<setfill('-')<<setw(31)<<"-"<<endl;
		for (map<int,string>::iterator it=operations.begin();it!=operations.end();++it){
			cout<<"|"<<setfill(' ')<<setw(8)<<left<<it->first<<"|"<<setw(20)<<it->second<<"|"<<endl;
		}
		cout<<setfill('-')<<setw(31)<<"-"<<endl;
		cin>>choice;
		switch(choice){
			case 1:
			{
				int num;
				cout<<"Enter the No.\n";
				cin<<num;
				insert_at_begining(&head,num);
				break;
			}
			case 2:
			{
				insert_at_position(&head);
				break;
			}
			case 3:
			{
				delete_at_positon(&head);
				break;
			}
			case 4:
			{
				reverseprint(head);
				break;
			}
			case 5:
			{
				printlist(head);
				break;
			}
			case 10:
			{
				cout<<"Exiting\n";
				break;
			}
			default:
			{
				cout<<"Invalid Option \n";
			}
		}
	}

	return 0;
}