//excercise 5.1 quiz 5

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	const int MAXVAL=30;
	const int STARTVAL=3;
    const int STEPSIZE=3;
    double meter;
	int feet;
    cout<<"FEET         METER\n";
    cout<<"----         -----\n";
    	feet = STARTVAL;
    cout<<setiosflags(ios::showpoint)<<setiosflags(ios::fixed)<<setprecision(2);
    while(feet<=MAXVAL)
    {
    
    	meter = feet / 3.28;
    	cout<<setw(4)<<feet <<setw(12)<<meter<<endl;
    	 feet = feet + STEPSIZE;
    	
    }
    return 0;
}
	
	
