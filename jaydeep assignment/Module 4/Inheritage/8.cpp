#include<iostream>

using namespace std;

class  A{
		 
		 public:
		
		fun(int a,int b)
		{
			cout<<"\n\t***Addition***";
			
			cout<<"\nEnter A:"<<a;
			cin>>a;
			cout<<"\nEnter B:"<<b;
			cin>>b;
			
			cout<<"\nAddition : "<<a+b;
		}
		
		fun(int c,int d)
		{
			cout<<"\n\t***Substraction***";
			
			cout<<"\nEnter A:"<<c;
			cin>>c;
			cout<<"\nEnter B:"<<d;
			cin>>d;
			
			cout<<"\Substraction : "<<c-d;
		}
		fun(int e,int f)
		{
			cout<<"\n\t***Multiplication***";
			
			cout<<"\nEnter A:"<<e;
			cin>>e;
			cout<<"\nEnter B:"<<f;
			cin>>f;
			
			cout<<"\Multiplication : "<<e*f;
		}
		fun(int j,int k)
		{
			cout<<"\n\t***Division***";
			cout<<"\nEnter A:"<<j;
			cin>>j;
			cout<<"\nEnter B:"<<k;
			cin>>k;
			
			cout<<"\nDivision : "<<j/k;
		}
};

int main()
{
	A obj;
	obj.fun(a,b);
	obj.fun(c,d);
	obj.fun(e,f);
	obj.fun(j,k);
	
}
