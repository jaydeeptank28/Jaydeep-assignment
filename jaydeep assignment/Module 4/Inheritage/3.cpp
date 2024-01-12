#include<iostream>

using namespace std;

class Person{
	public:
		string name;
		int age;
		fun()
		{
			cout<<"Enter Name : ";
			cin>>name;
			cout<<"Enter Age : ";
			cin>>age;
		}
};
class student{
	public:
		
			float per;
			percentage()
			{
				cout<<"Enter Percentage : ";
				cin>>per;
			}
};
class Teacher : public Person , public student {
	   public:
	   	
	   	int s;
	   	salary()
	   	{
	   		cout<<"Enter Salary : ";
			cin>>s;
			
			cout<<"\nName : "<<name;
			cout<<"\nAge : "<<age<<"Years";
			cout<<"\nPercentage : "<<per<<"%";
			cout<<"\nSalary : "<<s;
			
				
		}
		
};
int main ()
{
	Teacher obj;
	obj.fun();
	obj.percentage();
	obj.salary();
}

