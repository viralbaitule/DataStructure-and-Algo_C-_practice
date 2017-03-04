#include "iostream"
using namespace std;


int main(){
	int data[]={1,2,3,4,5,6,7,8};
	int *p;
	p=&data[0];
	cout<<"p="<<p<<endl;
	cout<<"data="<<&data[0]<<endl;
	int *q;
	
	cout<<"addres of p"<<&p<<endl;
	q=&p[0];
	cout<<q;
}