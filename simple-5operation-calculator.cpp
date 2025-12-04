#include<iostream>
using namespace std;
int main(){
	char op;
	int a,b;
	cout<<"enter number 1: ";
	cin>>a;
	cout<<"Enter operation('+','-','*','/','%'): ";
	cin>>op;
	cout<<"enter second number: ";
	cin>>b;
	cout<<" = ";
	switch(op){
		case'+':cout<<a+b;break;
		case'-':cout<<a-b;break;
		case'*':cout<<a*b;break;
		case'/':if(b==0)
		        cout<<"error! denominator can't be zero.";
		        else
		        cout<<a/b;break;
		case'%':if(b==0)
		       cout<<"error! denominator can't be zero.";
		       else
		       cout<<a%b;break;
		default: cout<<"invalid choice!!";
		
	}
	return 0;
}