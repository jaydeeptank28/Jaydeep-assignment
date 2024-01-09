#include<iostream>

using namespace std;

class Date{
	
	private:
		
		int day,month,year;
	
		public:
			Date()
			{
				cout<<"Enter Day : ";
				cin>>day;
				cout<<"Enter Month : ";
				cin>>month;
				cout<<"Enter Year : ";
				cin>>year;
				
				if(day>=1 && day<=31 && month>=1 && month<12 && year >=1900)
				{
					cout<<"Date is Valid";
				}else
				{
					cout<<"Date is Invalid";
				}
			}		
};

int main()
{
	Date obj;
}
