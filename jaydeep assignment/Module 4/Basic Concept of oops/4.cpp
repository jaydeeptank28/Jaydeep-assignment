#include<iostream>

using namespace std;

class Circle{
	private :
		float radious;
		float pi =3.14;

		public:
			fun()
			{
				cout<<"Enter Radious of Circle : ";
				cin>>radious;
				
				cout<<"Area of Circle : "<<pi*radious*radious;		//Area of circle= (pi * r^2)
				cout<<"\nCircumference of Circle : "<<2*pi*radious;    	//Circumference=(2 * pi * r)
			}
};

int main()
{
	Circle obj;
	obj.fun();
}
