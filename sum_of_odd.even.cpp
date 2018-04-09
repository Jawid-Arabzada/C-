#include<iostream>
using namespace std;
int main()
{
	const int N =5;
	int counter=1;
	int num,sum;
	int oddsum=0;
	int evensum=0;
	cout<<"Enter "<<N <<"number\n";
	while(counter<=N)
	{
		cin>>num;
		if(num%2==0)
		evensum = num+ evensum;
	else
	oddsum = num+ oddsum;
	counter++;
	
		
	
	
 }
 cout<<"The sum of even is "<<evensum<<endl;
 cout<<"The sum of odd is "<<oddsum<<endl;
	
return 0;	
	
}
