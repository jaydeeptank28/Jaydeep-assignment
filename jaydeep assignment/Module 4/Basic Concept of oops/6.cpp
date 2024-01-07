#include<iostream>

using namespace std;

class Person{
	private:
		string name,country;
		int age;
		public:
			getdata()
			{
				cout<<"Enter Your Name : ";
				cin>>name;
				
				cout<<"Enter your Age : ";
				cin>>age;
				
				cout<<"Enter Your Country : ";
				cin>>country; 
			}
			setdata()
			{
				cout<<"\nYour Name is : "<<name;
				cout<<"\nYour Age is : "<<age;
				cout<<"\nYour Country is : "<<country;
			}
};

int main()
{
	Person obj;
	obj.getdata();
	obj.setdata();
}
