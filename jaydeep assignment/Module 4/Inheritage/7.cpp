#include<iostream> 

using namespace std; 

// Base class 
class A 
{ 
	public: 
		A()        	//class A constructor
		{ 
			cout << "Base class A constructor \n"; 
		} 
}; 

// Derived class B 
class B: public A 
{ 
	public: 
		B() 			//class B constructor
		{ 
			cout << "Class B constructor \n"; 
		} 
}; 

// Derived class C 
class C: public B 
{ 
	public: 
		C() 			//class C constructor
		{ 
			cout << "Class C constructor \n"; 
			
		} 
}; 

 
int main() 
{ 
	C obj;  
}

