#include<iostream>
using namespace std;
int main()
{
	const int MAXNUM=4;
	int num,count=1;
	int total = 0;
	while(count<=MAXNUM)
	{
		cout<<"Enter a number: "<<endl;
		cin>>num;
		total = total + num;
		cout<<"Total is now: "<<total<<endl;
		count++;
	}
	cout<<"The final toatl is : "<<total<<endl;
	return 0;
}
