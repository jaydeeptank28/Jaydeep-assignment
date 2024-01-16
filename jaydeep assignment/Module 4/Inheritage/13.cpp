#include<iostream>

using namespace std;

class A {
	private:
		int a,b;
		public:
			fun()
			{
				cout<<"Enter Number 1 : ";
				cin>>a;
				cout<<"Enter Number 2 : ";
				cin>>b;
			}
			friend max(A& m);				//Declaration of friend function 
};

			max(A& m)
			{
				if(m.a>m.b)
				{
					cout<<"Number 1 is max";
				}
				else
				{
					cout<<"Number 2 is max";
				}
			}

int main()
{
	A obj;			//object of class
	obj.fun();		//access of function
	max(obj);		//function calling 
}
