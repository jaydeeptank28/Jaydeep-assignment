#include<iostream>

using namespace std;

class Calci{
	    float a,b;
	    
	 	 public:
	 	 	Calci()				//constructor class name and function name is same
	 	 	{
	 	 		cout<<"Simple Calucalator Using Constructor";
			}
			add()
			{
				cout<<"\n\nEnter A : ";
				cin>>a;
				cout<<"Enter B : ";
				cin>>b;
				
				cout<<"\nAddition : "<<a+b;
			}
			sub()
			{
				cout<<"\n\nEnter A : ";
				cin>>a;
				cout<<"Enter B : ";
				cin>>b;
				
				cout<<"\nSubstraction : "<<a-b;
			}
			mul()
			{
				cout<<"\n\nEnter A : ";
				cin>>a;
				cout<<"Enter B : ";
				cin>>b;
				
				cout<<"\nMultiplication : "<<a*b;
			}
			div()
			{
				cout<<"\n\nEnter A : ";
				cin>>a;
				cout<<"Enter B : ";
				cin>>b;
				
				cout<<"\nDivision : "<<a/b;
			}
};

int main()
{
	Calci obj;
	obj.add();
	obj.sub();
	obj.mul();
	obj.div();
	
}
