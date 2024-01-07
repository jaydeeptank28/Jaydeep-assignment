#include<iostream>
using namespace std;

class myclass{				// Create a one class name myclass

	public:			    	// specifier
	
		add()				// make 4 function add,sub,mul,div
		{
			float a,b;
			cout<<"\t***ADDITION***";
			
			cout<<"\n\nEnter Number A : ";
			cin>>a;
			cout<<"Enter Number B : ";
			cin>>b;
			
			cout<<"\nAddition : "<<a+b;
		}
		sub()
		{
			float a,b;
			
			cout<<"\n\n\t***SUBSTRACTION***";
			
			cout<<"\n\nEnter Number A : ";
			cin>>a;
			cout<<"Enter Number B : ";
			cin>>b;
			
			cout<<"\nSubstraction : "<<a-b;
		}
		mul()
		{
			float a,b;
			cout<<"\n\n\t***MULTIPLICATION***";
			
			cout<<"\n\nEnter Number A : ";
			cin>>a;
			cout<<"Enter Number B : ";
			cin>>b;
			
			cout<<"Multiplicattion : "<<a*b;
		}
		div()
		{
			float a,b;
			cout<<"\n\n\t***DIVISION***";
			cout<<"\n\nEnter Number A : ";
			cin>>a;
			cout<<"Enter Number B : ";
			cin>>b;
			
			cout<<"\nDivision : "<<a/b;
		}
};


int main()
{
	myclass obj; 		//object creation give any name here is it obj
	obj.add();			//function access with object
	obj.sub();
	obj.mul();
	obj.div();
	
}
