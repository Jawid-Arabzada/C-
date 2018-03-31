#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main()
{

struct 
{
	string fname;
	string lname;
	int idnumber;
	int phonenum;
	string address;
	int numday;
	int numwekk;
	int nummonth;
}data;

cout<<"Please Enter your First Name : " <<endl;
cin>>data.fname;
cout<<"Enter your Last Name : "<<endl;
cin>>data.lname;
cout<<"Enter your idnumber  "<<endl;
cin>>data.idnumber;
cout<<"Enter your phone number "<<endl;
cin>>data.phonenum;
cout<<"Please Enter your Address "<<endl;
cin>>data.address;
cout<<endl;

cout<<"personal information"<<endl;
cout<<endl;
cout<<endl;
cout<<"Name              " <<setiosflags(ios::left)<<setw(20)<<data.fname<<endl;
cout<<"Last Name         " <<setiosflags(ios::left)<<setw(20)<<data.lname<<endl;
cout<<"ID Number         " <<setiosflags(ios::left)<<setw(20)<<data.idnumber<<endl;
cout<<"Phone Number      " <<setiosflags(ios::left)<<setw(20)<<data.phonenum<<endl;
cout<<"Address           " <<setiosflags(ios::left)<<setw(20)<<data.address<<endl;

return 0;
}

