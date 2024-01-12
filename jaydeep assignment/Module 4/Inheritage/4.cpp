#include <iostream>

using namespace std;

class student{
	
		public:
    		string  name;
  		    int roll;
    	get()
   		{
        	cout<<"Enter Name : ";
        	cin>>name;
        	cout<<"Enter Roll No : ";
        	cin>>roll;
    	}
};
class mark
{
    public:
    int mark[4],i;
     in()
    {
        cout<<"Enter Marks : ";
        for(i=0;i<4;i++)
        {
            cin>>mark[i];
        }
    }
};
class process:public student,public mark{
	
    public:
    	int total;
    	float avg;
    	calc()
  		{
       		total=mark[0]+mark[1]+mark[2]+mark[3];
        	avg=total/4;
    	}
    	
    	dis()
    	{
        	cout<<"\nName : "<<name;
        	cout<<"\nRoll NO : "<<roll;
        	cout<<"\nMarks entered  :";
       		for(i=0;i<4;i++)
        {
            cout<<mark[i]<<" ";
        }
        cout<<endl;
        cout<<"\nTotal Marks :"<<total;
        cout<<"\nAverage : "<<avg;
    }
};
int main()
{

    process obj;
    obj.get();
    obj.in();
    obj.calc();
    obj.dis();
  
    
}
