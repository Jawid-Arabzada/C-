#include <iostream>
#include<iomanip>
using namespace std;
void result (int,int);
int main()
{
int num1,num2;
cout<<"Enter the start number"<<endl;
cin>>num1;
cout<<"Enter the increment "<<endl;
cin>>num2;

result(num1,num2);

	
	
	

return 0;
}
void result (int b,int c)
{
	int i;
cout<<"num   square    cube "<<endl;
cout<<"---    -----     -----"<<endl;
	for(i=b;i<10;i=i+c)
	cout<<setw(2)<<i<<setw(6)<<i*i<<setw(8)<<i*i*i<<endl;
    
	return;
}
