#include<iostream>

using namespace std;

class Rectangle{			//Base Class
		
		protected:
			
			float length,width,area;
			
			public:
				get()
				{
					cout<<"Enter Length : ";
					cin>>length;
					cout<<"Enter Width : ";
					cin>>width;	
				}			
};

class Area:public Rectangle{			//Derived Class
	
			public:
				set()
				{
					area = length*width;
					cout<<"Area of Rectangle : "<<area;
				}
};

int main()
{
	Area obj;
	obj.get();
	obj.set();
}



