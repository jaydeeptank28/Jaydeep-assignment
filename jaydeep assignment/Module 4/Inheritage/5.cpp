#include<iostream>

using namespace std;

class Students{
	public:
		int rn;
			
			rollno()
			{
				cout<<"Enter RollNO : ";
				cin>>rn;
			}
};
class Test : public Students{
	public:
		int m1,m2;
			
			marks()
			{
				cout<<"Enter Marks 1 : ";
				cin>>m1;
				cout<<"Enter Marks 2 : ";
				cin>>m2;
			}
};
class Totalmarks : public Test{
	public:
		
			
			total()
			{
				cout<<"\n\nMarks 1 : "<<m1;
				cout<<"\nMarks 2 : "<<m2;
				cout<<"\nTotal Marks : "<<m1+m2;
				
			}
};

int main ()
{
	Totalmarks obj;
	obj.rollno();
	obj.marks();
	obj.total();
}


