#include<iostream>
using namespace std;
int findmax(int[], int);

int main()
{
	const int SIZE=5;
	int nums[SIZE]={2,18,1,27,16};
	cout<<"\n the maximum value is  "
	<<findmax(nums,SIZE)<<endl;
	return 0;
}
int findmax(int val[], int numles)
{
	int i,max=val[0];
	for(i=0;i<numles;i++)
	if(max<val[i])
	max = val[i];
	return max;
}
