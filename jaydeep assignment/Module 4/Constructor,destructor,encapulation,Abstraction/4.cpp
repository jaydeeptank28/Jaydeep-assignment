#include<iostream>

using namespace std;

class Employee{
	
	private :
		string name;
		int em_id,salary;
		
			public:
				Employee()
				{
					cout<<"Enter Your Name : ";
					cin>>name;
					
					cout<<"Enter Your Empoyee ID : ";
					cin>>em_id;
					
					cout<<"Enter Your Salary : ";
					cin>>salary;
				}
				fun()
				{
					cout<<"\nYour Name is : "<<name;
					cout<<"\nYour Employee ID is : "<<em_id;
					cout<<"\nYour Salary is : "<<salary;
					cout<<"\nYour Annual Salary : "<<12*salary;
				}
};

int main()
{
	Employee obj;
	obj.fun();
}

