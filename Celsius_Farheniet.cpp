#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double fahr=0,celsius=0;
	int num;
	cout << "\nHow many conversions do you want to see?  ";
	cin >> num;
	cout << "\nAt what temperature Fahrenheit to you want to start?  ";
	cin >> fahr;

	cout 	<< "\nFahrenheit    Celsius\n"
		<< "----------------------\n";
		for(int i=1;i<=num;i++)
		{	
		cout << setw(3) << fahr << "        "
			 << setw(3) << (5.0/9.0)*(fahr - 32.0) << endl;
		fahr += 5;
     	}
	return 0;
}
