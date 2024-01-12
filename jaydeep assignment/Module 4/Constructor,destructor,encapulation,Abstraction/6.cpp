#include<iostream>

using namespace std;

class Employee{
	
	private :
		string name;
		int id;
		float salary,pf,inc;
		
	public:
		Employee()
		{	
		//input data of employee
			cout<<"Enter Employee Name : ";
			cin>>name;
			cout<<"Enter Employee ID : ";
			cin>>id;
			cout<<"Enter Employee Salary : ";
			cin>>salary;
			cout<<"Enter Employee Performance : ";
			cin>>pf;
			
			
			//print data of employee
			cout<<"\nEmployee Name : "<<name;
			cout<<"\nEmployee ID : "<<id;
			cout<<"\nEmployee Salary : "<<salary;
			
			inc=salary*pf;		//increment
			
			cout<<"\nEmployee Increment : "<<inc;
			cout<<"\nEmployee Salary After Increment : "<<salary+inc;
		}
};

int main()
{
	Employee obj;
}
