#include<iostream>
using namespace std;

class Cricketer {			//Base Class
	
	protected:
	
    string name;
    int age;

	public:
		get()
		{
       		cout << "Enter name: ";
        	cin >> name;
        	cout << "Enter age: ";
        	cin >> age;
    	}
    
};

class Batsman : public Cricketer {		//Derived Class
	private:
		
    	int totalRuns;
    	double averageRuns;
    	int bestPerformance;

		public:
		
		getdata()	
		{       
        	cout << "Enter total runs: ";
        	cin >> totalRuns;
        	cout << "Enter average runs: ";
        	cin >> averageRuns;
        	cout << "Enter best performance: ";
        	cin >> bestPerformance;
    	}
    	
		setdata()
   		{
        cout << "\nName: " << name;
        cout << "\nAge: " << age;
        cout << "\nTotal Runs: " << totalRuns;
        cout << "\nAverage Runs: " << averageRuns;
        cout << "\nBest Performance: " << bestPerformance;
    	}
};

int main() {
    Batsman obj;
    obj.get();
    obj.getdata();
    obj.setdata();

}

