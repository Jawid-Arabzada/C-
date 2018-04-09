#include<iostream>
using namespace std;
 int sum1(int a,int b)

{
int sum;
sum = a + b;
return sum;
}
int main()
{
	int num1,num2,sum;
	cout<<"Enter num1"<<endl;
	cin>>num1;
	cout<<"Enter num2 "<<endl;
	cin>>num2;
	sum = sum1(num1,num2);
	cout<<"The sum is "<<sum<<endl;

return 0;
}

