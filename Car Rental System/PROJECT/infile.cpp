#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>
#include<iomanip>
using namespace std;
int main()
{
 string filename="jawid.dat";
 string descrip;
 int price;
 ifstream inFile;
 inFile.open(filename.c_str());
 if(inFile.fail())
 {
 	cout<<"\n The file was not opened "
 	<<"Check The file "<<endl;
 	exit(1);
 }
 inFile>>descrip>>price;
 while(inFile.good())
 {
 	cout<<descrip << '   ' <<price<<endl;
 	inFile>>descrip>>price;
 }
 inFile.close();
return 0;
}
