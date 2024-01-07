#include<iostream>

using namespace std;

class Car{
	private :
		 
		string company,model;
		int year;
			
			public:
			
			getdata()
			{
				cout<<"Enter The Company of the Car : ";
				cin>>company;
				cout<<"Enter The Model of Car : ";
				cin>>model;
				cout<<"Enter Year of Car : ";
				cin>>year;
			}
			setdata()
			{
				cout<<"\nCar Company Name : "<<company;
				cout<<"\nCar Model Name : "<<model;
				cout<<"\nCar Year : "<<year;
			}
				
};

int main()
{
	Car obj;
	obj.getdata();
	obj.setdata();
}
