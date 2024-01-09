#include<iostream>

using namespace std;

class Triangle {
	private : 
	
	float x,y,z;
	
	public :
		Triangle()
		{
			cout<<"Enter Side X : ";
			cin>>x;
			
			cout<<"Enter Side Y : ";
			cin>>y;
			
			cout<<"Enter Side Z : ";
			cin>>z;
			
			if(x==y && y==z)
			{
				cout<<"\nEquilateral Trianle";     // all sides equal 
			}
			else if(x==y || y==z || z==x)
			{
				cout<<"\nIsoceles Triangle";		//atleast two sides equal
			}
			else
			{
				cout<<"\nScalene Triangle";		//no sides equal 
			}
		}	
};

int main()
{
	Triangle obj;
}
