#include<iostream>

using namespace std;

class Rectangle{
	private :
		float length,width;
		float area,peri;
		
		public:
			fun()
			{
				cout<<"Enter length : ";
				cin>>length;
				cout<<"Enter Width : ";
				cin>>width;
				
				//area of rectangle 
				area = length * width;
				cout<<"Area of Rectangle : "<<area;
				
				//perimeter of rectangle
				peri = 2 * (length*width);
				cout<<"\nPerimeter of Rectangle : "<<peri;
			}
};

int main()
{
	Rectangle obj;
	obj.fun();
}
