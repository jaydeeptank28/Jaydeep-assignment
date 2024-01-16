#include<iostream>
using namespace std;

class A {
	private :
		int a,b;
		
		public:
			fun()
			{
				cout<<"Enter Number A : ";
				cin>>a;
				cout<<"Entert Number B : ";
				cin>>b;
			}
			friend swap(A& s);        // devclare friend function
};

			swap(A& s)		//friend function
			{
				s.a = s.a + s.b;
				s.b = s.a - s.b;
				s.a = s.a - s.b;
			
				cout<<"After Swap A is : "<<s.a;
				cout<<"\nAfter Swap B is : "<<s.b;
			}
			
int main()
{
	A obj;			//object of class 
	obj.fun();		//access of function
	swap(obj);		//Call of function
}
