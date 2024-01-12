#include<iostream>

using namespace std;

class Student{
	private:
		string name,clas;
		int rollno;
		float marks;
		char grade;
		public:
			getdata()
			{
				cout<<"Enter Student Name : ";
				cin>>name;
				cout<<"Enter Student Class Name : ";
				cin>>clas;
				cout<<"Enter Student Roll NO : ";
				cin>>rollno;
				cout<<"Enter student Marks : ";
				cin>>marks;
			}
			setdata()
			{
				cout<<"\n\nStudent Name : "<<name;
				cout<<"\nStudent Class : "<<clas;
				cout<<"\nStudent Roll NO : "<<rollno;
				
				//Grade according marks
				
				if (marks >= 90) 
				{
 		        grade = 'A';
 		    	}
    			else if (marks >= 80) 
				{
		        grade = 'B';
    			} 
					else if (marks >= 70) 
				{
        		grade = 'C';
    			} 
					else if (marks >= 60) 
				{
        		grade = 'D';
   				} 
				   else 
				{
    		    grade = 'F';
    			}

    			// Display the result
    			cout <<"\nGrade : " << grade;	
}
};

int main()
{
	Student obj;
	obj.getdata();
	obj.setdata();
}
