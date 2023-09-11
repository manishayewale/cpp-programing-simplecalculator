#include<iostream>

using namespace std;
int main ()
{
	char op;
	double num1,num2;
	
	
	while(true)
	{
	cout<<"\n Enter the operator(+,_,*,/)  :";
	cin>>op;
	
	cout<<"\n enter two number one by one :";
	cin>>num1>>num2;
	
	switch(op)
	{
		case '+':
			cout<<num1<<"+"<<num2<<"="<<(num1+num2)<<endl;
			break;
			
		case '-' :
			cout<<num1<<"-"<<num2<<"="<<(num1-num2)<<endl;
			break;
			
		case '*':
			cout<<num1<<"*"<<num2<<"="<<(num1*num2)<<endl;
			break;
			
		case '/':
			if(num2!=0.0)
			cout<<num1<<"/"<<num2<<"="<<(num1/num2)<<endl;
			else
			cout<<"divide by zero condition"<<endl;
			break;
			
		default:
			cout<<op<<" is an invalid operator";
	}
}}
