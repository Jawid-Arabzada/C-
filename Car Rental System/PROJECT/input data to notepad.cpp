#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>
#include<iomanip>
using namespace std;
int main()
{
	string *name;
	int *dailyp;
	int *weekp;
	int *monthlyp;
	const int SIZE=14;
	int i;
	string filename="jawid.dat";
	ofstream outFile;
	outFile.open(filename.c_str());
	string cars[]={"PERODUA MYVI 1.3    ","PERODUA MYVI 1.3 SE ","PERODUA MYVI 1.5 SE ","PROTON PESONA 1.6   ",
	"PROTON PEREVE 1.6   ","PROTON INSPIRA 2.0  ","HONDA CITY 1.6      ","  BMW Z4 3.0        ","MINICOOPER COUNTRYMAN",
	"PERODUA ALZA 1.6    "," ESTIMA 2.4         ","PALPHARD            ","HYUNDAISTAREX ROYALE","VELLFIRE 2.4        "};
	int dailyprice[SIZE]={100,140,150,150,190,250,270,1600,1100,200,550,850,480,900};
	int weeklyprice[SIZE]={700,770,840,1050,1200,1540,1750,7700,0,1400,3010,3850,12800,4200};
	int monthlyprice[SIZE]={1800,1950,2100,2200,2520,3000,3500,18000,0,3000,6000,6800,6000,7500};
	if(outFile.fail())
	{
		cout<<"\n The file named " 
		    <<"\n was not successfully opened "<<endl;
		    exit(1);
	}
	outFile <<setiosflags(ios::fixed)
	        <<setiosflags(ios::showpoint)
	        <<setprecision(2);
	outFile<<"CAR NAMES             DAILY PRICE    	WEEKLY PRICE        MONTHLY PRICE     "<<endl;
	dailyp = &dailyprice[0];
	weekp = &weeklyprice[0];    
	monthlyp = &monthlyprice[0]; 
	name = &cars[0]; 
	for(i=0;i<14;i++)
	outFile<<*(name+i)<<setw(10)<<*(dailyp+i) <<setw(16)<<*(weekp+i)<<setw(20)<<*(monthlyp+i)<<endl;
	      
	       
	       outFile.close();
	       cout<<"The file " <<filename
	            <<"has been successfully written . " <<endl;
	            return 0;
	
}
