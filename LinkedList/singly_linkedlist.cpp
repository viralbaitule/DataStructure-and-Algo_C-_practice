#include "iostream"
#include "iomanip"
#include "vector"
#include "string"
#include "map"
#include <stdlib.h>
using namespace std;

struct Node{
	int data;
	Node * next;
};

void insert_at_begining(Node **head, int num){

	Node * newnode= new Node();
	newnode->data=num;
	newnode->next=*head;
	*head=newnode;
}

void insert_at_position(Node **head){
	cout<<"Enter position and Number"<<endl;
	int pos,num;
	cin>>pos>>num;
	if (pos==1){
		insert_at_begining(&*head,num);
	}
	else{
		Node * temp=*head;
		for (int i=0;i<pos-2;i++){
			if (temp==NULL){
				cout<<"Position out of range"<<endl;
				return;
			}
			temp=temp->next;
		}
		Node * newnode=new Node();
		newnode->data=num;
		newnode->next=temp->next;
		temp->next=newnode;
	}
}

void delete_at_positon(Node **head){
	cout<<"Enter the Position \n";
	int pos;
	cin>>pos;
	Node *current=*head;
	Node *nex= new Node();
	if (pos==1){
		*head=current->next;
		free(current);
		free(nex);
		return;
	}
	for(int i=0;i<pos-2;i++){
		if(current==NULL){
			cout<<"postion out of range \n";
			return;
		}
		current=current->next;
		nex=current->next;
	}
	current->next=nex->next;
	free(nex);
	free(current);
}

void sorting(Node **head){
}

void reverseprint(Node *head){
	Node *temp=head;
	while (temp!=NULL){
		reverseprint(temp->next);
		cout<<temp->data<<"	";
		return;
	}
	cout<<endl;
}

void printlist(Node *head){
	Node * temp=head;
	while (temp!=NULL){
		cout<<temp->data<<"	";
		temp=temp->next;
	}
	cout<<endl;
}

void reverse(Node **head){
	Node * prev=NULL;
	Node * current=*head;
	Node * nex;
	while(current!=NULL){
		nex=current->next;
		current->next=prev;
		prev=current;
		current=nex;
	}
	*head=prev;
}

int main(int argc, char * agrv[]){
	Node * head=NULL;
	int data[]={2,4,1,6,7};
	for (int i=0;i<5;i++){
		int num=data[i];
		Node * newnode= new Node();
		newnode->data=num;
		newnode->next=head;
		head=newnode;
	}
	int choice;
	while(choice!=10){
		cout<<endl<<"list : ";
		printlist(head);
		std::cout<<"Enter the no. for the operation you want to perform with the list. \n";
		std::cout<< std::setfill('-')<<std::setw(33) <<"-"<<std::endl;
		std::cout <<std::setfill(' ')<< '|' << std::setw(10) << std::left <<"Option" << '|' <<std::setw(20) << "operation" << '|' << std::endl;
		std::cout<< std::setfill('-')<<std::setw(33) <<"-"<<std::setfill(' ')<<std::endl;
		std::map<int,std::string> operations;
		operations[1]="insert_at_begining";
		operations[2]="insert_at_position";
		operations[3]="delete_at_positon";
		operations[4]="sorting";
		operations[5]="reverse print";
		operations[6]="reverse";
		operations[7]="print";
		operations[10]="Exit";
		for (map<int,string>::iterator it=operations.begin();it!=operations.end();++it){
			std::cout <<std::setfill(' ')<< '|' << std::setw(10) << std::left <<it->first<< '|' <<std::setw(20) << it->second << '|' << std::endl;
		}
		std::cout<< std::setfill('-')<<std::setw(33) <<"-"<<std::setfill(' ')<<std::endl;
		// choice=atoi(agrv[1]);
		cin>>choice;
		switch(choice){
			case 1:
			{
				cout<<"insert_at_begining\n";
				int num;
				cout<<"Enter the number \n";
				cin>>num;
				insert_at_begining(&head,num);
				break;
			}
			case 2:
			{
				cout<<"insert_at_position\n";
				insert_at_position(&head);
				break;
			}
			case 3:
			{
				cout<<"delete_at_positon\n";
				delete_at_positon(&head);
				break;
			}
			case 4:
			{
				cout<<"sorting\n";
				sorting(&head);
				break;
			}
			case 5:
			{
				cout<<"reverse print \n";
				reverseprint(head);
				break;
			}
			case 6:
			{
				cout<<"reverse\n";
				reverse(&head);
				break;
			}
			case 7:
			{
				cout<<"print\n";
				printlist(head);
				break;
			}
			case 10:
			{
				cout<<"Exiting \n";
				break;
			}	
			default:
				cout<<"Invalid argument\n";
		}
	}
	return 0;
}