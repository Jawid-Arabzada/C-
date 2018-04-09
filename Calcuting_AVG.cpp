#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int i,j;
	double num,total,average;
	for(i=1;i<5;i++)
	{
		total = 0;
		cout<<"\nExperiment " <<i<<endl;
		for(j=1;j<7;j++)
		{
			cout<<"Enter test result "<<j<<":  ";
			cin>>num;
			total = num + total;
			
		}
		average = total / (j-1);
		cout << "Experiment " << i << " average: " << average << endl;
	}
	return 0;
}
