
//written by Jawid Arabzada   1328317
#include<iostream>
#include<windows.h>
#include<iomanip>
#include<fstream>
#include<cstdlib>
#include<string>
using namespace std;
struct Data
{
	string fname;
	string lname;
	string address;
	int PhoneNo;
	int idNum;
	int dpr;
	int wpr;
	int mpr;
	int total;
	int choose;
	int dur;
	
};
int CalcD_1(int day){
	int price = 100;
	return (day * price);
}int CalcM_1(int month){
	int price = 1800;
	return (month*price);
}
int CalcD_2(int day){
	int price = 150;
	return (day * price);
}int CalcM_2(int month){
	int price = 2220;
	return (month*price);
}int CalcD_3(int day){
	int price = 200;
	return (price * day);
}int CalcM_3(int month){
	int price = 3000;
	return (price * month);
}int CD_1(int day){
	int price = 140;
	return (day * price);
}int CW_1(int week){
	int price = 770;
	return (week * price);
}int CM_1(int month){
	int price = 1950;
	return (month * price);
}int CD_2(int day){
	int price = 150;
	return (day * price);
}int CW_2(int week){
	int price = 840;
	return (week * price);
}int CM_2(int month){
	int price = 2100;
	return (month * price);
}int CD_3(int day){
	int price = 190;
	return (day * price);
}int CW_3(int week){
	int price = 11200;
	return (week * price);
}int CM_3(int month){
	int price = 2520;
	return (month * price);
}int CD_4(int day){
	int price = 250;
	return (day * price);
}int CW_4(int week){
	int price = 1540;
	return (week * price);
}int CM_4(int month){
	int price = 3000;
	return (month * price);
}int CD_5(int day){
	int price = 270;
	return (day * price);
}int CW_5(int week){
	int price = 1750;
	return (week * price);
}int CM_5(int month){
	int price = 3500;
	return (month * price);
}int CD_6(int day){
	int price = 1600;
	return (day * price);
}int CW_6(int week){
	int price = 7700;
	return (week * price);
}int CM_6(int month){
	int price = 18000;
	return (month * price);
}int CD_7(int day){
	int price = 1100;
	return (day * price);
}int CW_7(int week){
	int price = 0;
	return (week * price);
}int CM_7(int month){
	int price = 0;
	return (month * price);
}int CD_8(int day){
	int price = 550;
	return (day * price);
}int CW_8(int week){
	int price = 3010;
	return (week * price);
}int CM_8(int month){
	int price = 6000;
	return (month * price);
}int CD_9(int day){
	int price = 850;
	return (day * price);
}int CW_9(int week){
	int price = 3850;
	return (week * price);
}int CM_9(int month){
	int price = 6800;
	return (month * price);
}int CD_10(int day){
	int price = 480;
	return (day * price);
}int CW_10(int week){
	int price = 2800;
	return (week * price);
}int CM_10(int month){
	int price = 6000;
	return (month * price);
}int CD_11(int day){
	int price = 900;
	return (day * price);
}int CW_11(int week){
	int price = 4200;
	return (week * price);
}int CM_11(int month){
	int price = 7500;
	return (month * price);
}
int main()

{
	Data pc;
	char ch;
	int choice,choose,d,month,week;
	const int SIZE=14;
	string *name;
	int *dailyp;
	int *weekp;
	int *monthlyp;
	string filename="carrent.dat";
	ofstream outFile;
	outFile.open(filename.c_str());
	string cars[]={"PERODUA MYVI 1.3    ","PERODUA MYVI 1.3 SE ","PERODUA MYVI 1.5 SE ","PROTON PESONA 1.6   ",
	"PROTON PEREVE 1.6   ","PROTON INSPIRA 2.0  ","HONDA CITY 1.6      ","  BMW Z4 3.0        ","MINICOOPER COUNTRYMAN",
	"PERODUA ALZA 1.6    "," ESTIMA 2.4         ","PALPHARD            ","HYUNDAISTAREX ROYALE","VELLFIRE 2.4        "};
	int dailyprice[SIZE]={100,140,150,150,190,250,270,1600,1100,200,550,850,480,900};
	int weeklyprice[SIZE]={700,770,840,1050,1200,1540,1750,7700,0,1400,3010,3850,12800,4200};
	int monthlyprice[SIZE]={1800,1950,2100,2200,2520,3000,3500,18000,0,3000,6000,6800,6000,7500};
	cout<<endl;
	system("color A");
	cout << "\t\t\tPLEASE WAIT SYSTEM IS LOADING .......";
	cout<<endl;
	Sleep(10000);
	system("CLS");
	
	cout << "\t\t+++++++++++++++++++++++++++++++++++++++++ "<<endl;
	cout << "\t\t++ WELCOME TO EXIGO CAR RENTAL COMPANY ++ "<<endl;
	cout <<"\t\t++++++++++++++++++++++++++++++++++++++++++ "<<endl;
    cout<<endl;
    system("color F");
	
	
	if(outFile.fail())
	{
		cout<<"\n The file named " 
		    <<"\n was not successfully opened "<<endl;
		    exit(1);
	}
	outFile <<setiosflags(ios::fixed)
	        <<setiosflags(ios::showpoint);
	        
	outFile<<"CAR NAMES             DAILY PRICE    	WEEKLY PRICE        MONTHLY PRICE     "<<endl;
	cout<<"CAR NAMES             DAILY PRICE(RM)	   WEEKLY PRICE(RM)    MONTHLY PRICE(RM)"<<endl;
	dailyp = &dailyprice[0];
	weekp = &weeklyprice[0];    
	monthlyp = &monthlyprice[0]; 
	name = &cars[0]; 
	for(int i=0;i<SIZE;i++)
	outFile<<*(name+i)<<setw(10)<<*(dailyp+i) <<setw(20)<<*(weekp+i)<<setw(20)<<*(monthlyp+i)<<endl;
	for(int i=0;i<SIZE;i++)
	cout<<*(name+i)<<setw(10)<<*(dailyp+i) <<setw(25)<<*(weekp+i)<<setw(22)<<*(monthlyp+i)<<endl;
	
	      
	       
	       outFile.close();
	       cout<<"The file " <<filename
	            <<" has been successfully written . " <<endl;
	
	
	 cout<<"\n\nChoose from the the category below";
		 cout <<" \n\n                                   A : promotional cars"
		        "  \n\n                                   B : Nonepromotional cars";
		 									
		cout <<"\n\nEnter Your choice: ";
		                      
		
		                      
	cin >> ch;
	switch(ch){
		int choice,result;
		case 'A' :
		case 'a' : 
		cout<<"\nPlease Wait!!!";
		Sleep(1000);
	    system("CLS");
		cout <<"You've picked (A) Promotional cars.\n"
			 <<"\t\t\t\t\t(1) : PERODUA MYVI 1.3 \n"
		 	 <<"\t\t\t\t\t(2) : PROTON PESONA 1.6\n"
		     <<"\t\t\t\t\t(3) : PERODUA ALZA 1.6\n\n"
		     <<"Choose ur interest from the above cars: ";
		     cin >> choice;
		     switch(choice){
		     	case 1 : cout <<"You've picked No_1 :\n"
		     			      <<"\nCar name      : PERODUA MYVI 1.3\n\n"
		     	              <<"Daily price     : 1-7 days = RM100\n\n"
		     	              <<"Monthly Price   : RM1800\n";
		     	         cout <<"\n\nEnter the following information";
		             cout <<"\nFirst name : ";
		             cin  >> pc.fname;
		             cout <<"\nLast name: ";
		             cin  >> pc.lname;
		             cout <<"\nAddress: ";
		             cin  >> pc.address;
		             cout <<"\nID number: ";
		             cin  >> pc.idNum;
		             cout <<"\nPhone Number: ";
		             cin  >> pc.PhoneNo;
		             cout <<"\nDuration "
					 	  <<"\n          1: Day"
					 	  <<"\n          2: Month";
					 cout <<"\n\nChoose from the above list: ";
		             cin  >> d;
		             if(d == 1){
		             	cout <<"\nEnter the duration in day: ";
		             	cin  >> pc.dur;
		             	result = CalcD_1(pc.dur);
		             	
		             }else if(d == 2){
		             	cout <<"\nEnter the duration in month: ";
					    cin >> month;
					    result = CalcM_1(month);
		             } 
		            cout<<"Wait This Takes Few moments to proceed : "<<endl;   
					Sleep(10000);
                    system("CLS");
		             cout <<"\n\nHere its what You've choosen.\n";
		             cout <<"\nFirst Name   : " << pc.fname;
		             cout <<"\nLast Name    : " << pc.lname;
		             cout <<"\nAddress      : " << pc.address;
		             cout <<"\nID number    : " << pc.idNum;
		             cout <<"\nPhone number : " << pc.PhoneNo;
		             cout <<"\nCar type     : PERODUA MYVI 1.3";
		             cout <<"\nPrice        : RM" << result;
		             break;
		     	case 2 : cout <<"You've picked No_2 :\n"
		     			      <<"\nCar name    : PROTON PESONA 1.6\n\n"
		     	              <<"Daily price   : 1-7 days = RM150\n\n"
		     	              <<"Monthly Price : RM2220\n";
		     	         cout <<"\n\nEnter the following information";
		             cout <<"\nFirst name : ";
		             cin  >> pc.fname;
		             cout <<"\nLast name: ";
		             cin  >> pc.lname;
		             cout <<"\nAddress: ";
		             cin  >> pc.address;
		             cout <<"\nID number: ";
		             cin  >> pc.idNum;
		             cout <<"\nPhone Number: ";
		             cin  >> pc.PhoneNo;
		             cout <<"\nDuration "
					 	  <<"\n          1: Day"
					 	  <<"\n          2: Month";
					 cout <<"\n\nChoose from the above list: ";
		             cin  >> d;
		             if(d == 1){
		             	cout <<"\nEnter the duration in day: ";
		             	cin  >> pc.dur;
		             	result = CalcD_2(pc.dur);
		             	
		             }else if(d == 2){
		             	cout <<"\nEnter the duration in month: ";
					    cin >> month;
					    result = CalcM_2(month);
		             } 
		             cout<<"Wait This Takes Few moments to proceed : "<<endl;   
					 Sleep(10000);
                     system("CLS");
		             cout <<"\n\nHere its what You've choosen.\n";
		             cout <<"\nFirst Name   : " << pc.fname;
		             cout <<"\nLast Name    : " << pc.lname;
		             cout <<"\nAddress      : " << pc.address;
		             cout <<"\nID number    : " << pc.idNum;
		             cout <<"\nPhone number : " << pc.PhoneNo;
		             cout <<"\nCar type     : PROTON PESONA 1.6";
		             cout <<"\nPrice        : RM" << result;
		             break;
		     	case 3 :  cout <<"You've picked No_2 :\n"
		     			      <<"\nCar name    : PERODUA ALZA 1.6\n\n"
		     	              <<"Daily price   : 1-7 days = RM200\n\n"
		     	              <<"Monthly Price : RM3000\n";
		     	          cout <<"\n\nEnter the following information";
		             cout <<"\nFirst name : ";
		             cin  >> pc.fname;
		             cout <<"\nLast name: ";
		             cin  >> pc.lname;
		             cout <<"\nAddress: ";
		             cin  >> pc.address;
		             cout <<"\nID number: ";
		             cin  >> pc.idNum;
		             cout <<"\nPhone Number: ";
		             cin  >> pc.PhoneNo;
		             cout <<"\nDuration "
					 	  <<"\n          1: Day"
					 	  <<"\n          2: Month";
					 cout <<"\n\nChoose from the above list: ";
		             cin  >> d;
		             if(d == 1){
		             	cout <<"\nEnter the duration in day: ";
		             	cin  >> pc.dur;
		             	result = CalcD_3(pc.dur);
		             	
		             }else if(d == 2){
		             	cout <<"\nEnter the duration in month: ";
					    cin >> month;
					    result = CalcM_3(month);
		             }
					 cout<<"Wait This Takes Few moments to proceed : "<<endl;   
					 Sleep(10000);
                     system("CLS"); 
		             cout <<"\n\nHere its what You've choosen.\n";
		             cout <<"\nFirst Name   : " << pc.fname;
		             cout <<"\nLast Name    : " << pc.lname;
		             cout <<"\nAddress      : " << pc.address;
		             cout <<"\nID number    : " << pc.idNum;
		             cout <<"\nPhone number : " << pc.PhoneNo;
		             cout <<"\nCar type     : PERODUA ALZA 1.6";
		             cout <<"\nPrice        : RM" << result;
		             break;
		     	default : cout <<"Oops! wrong input ...";
		     			 
		     }break;
		case 'B' :
		case 'b' :
		   cout<<"\nPlease Wait!!!";
	   	   Sleep(1000);
	       system("CLS");
		   cout <<"You've picked (B) Nonepromotional cars\n" 
		       "\t\t\t\t\t(1) :PERODUA MYVI 1.3 SE\n "
		       "\t\t\t\t\t(2) :PERODUA MYVI 1.5 SE\n "
		       "\t\t\t\t\t(3) :PROTON PEREVE 1.6  \n "
		       "\t\t\t\t\t(4) :PROTON INSPIRA 2.0 \n "
               "\t\t\t\t\t(5) :HONDA CITY 1.6     \n "
		       "\t\t\t\t\t(6) :BMW Z4 3.0       \n "
		       "\t\t\t\t\t(7) :MINICOOPERCOUNTRYMAN\n"
		       "\t\t\t\t\t(8) :ESTIMA 2.4         \n"
		       "\t\t\t\t\t(9) :ALPHARD            \n"
		       "\t\t\t\t\t(10):HYUNDAISTAREX ROYALE\n"
		       "\t\t\t\t\t(11):VELLFIRE 2.4        \n";  
		cout <<"Choose ur interest from the above cars: ";
	    cin >> choice;
	    switch(choice){
	    	case 1 :
	    		cout <<"You've picked No_1 :\n"
		     		 <<"\nCar name      : PERODUA MYVI 1.3 SE\n\n"
		     	     <<"Daily price     : 140 = RM100\n\n"
		     	     <<"Weekly price    : RM770\n\n"
		             <<"Monthly Price   : RM1950\n";
		        cout <<"\n\nEnter the following information";
		             cout <<"\nFirst name : ";
		             cin  >> pc.fname;
		             cout <<"\nLast name: ";
		             cin  >> pc.lname;
		             cout <<"\nAddress: ";
		             cin  >> pc.address;
		             cout <<"\nID number: ";
		             cin  >> pc.idNum;
		             cout <<"\nPhone Number: ";
		             cin  >> pc.PhoneNo;
		             cout <<"\nDuration "
					 	  <<"\n          1: Day"
					 	  <<"\n          2: Week"
					 	  <<"\n          3: Month";
					 cout <<"\n\nChoose from the above list: ";
		             cin  >> d;
		             if(d == 1){
		             	cout <<"\nEnter the duration in day: ";
		             	cin  >> pc.dur;
		             	result = CD_1(pc.dur);
		             	
		             }else if(d == 2){
		             	cout <<"\nEnter the duration in week: ";
					    cin >> week;
					    result = CW_1(week);
		             }else if(d == 3){
		             	cout <<"\nEnter the duration in month: ";
		             	cin >> month;
		             	result = CM_1(month);
		             }
		             cout<<"Wait This Takes Few moments to proceed : "<<endl;   
				   	 Sleep(10000);
                     system("CLS");
		             cout <<"\n\nHere its what You've choosen.\n";
		             cout <<"\nFirst Name   : " << pc.fname;
		             cout <<"\nLast Name    : " << pc.lname;
		             cout <<"\nAddress      : " << pc.address;
		             cout <<"\nID number    : " << pc.idNum;
		             cout <<"\nPhone number : " << pc.PhoneNo;
		             cout <<"\nCar type     : PERODUA MYVI 1.3 SE";
		             cout <<"\nPrice        : RM" << result;
		             break;
	    	case 2 :
	    		cout <<"You've picked No_2 :\n"
		     		 <<"\nCar name      : PERODUA MYVI 1.5 SE\n\n"
		     	     <<"Daily price     : 150 = RM100\n\n"
		     	     <<"Weekly price    : RM840\n\n"
		             <<"Monthly Price   : RM2100\n";
		        cout <<"\n\nEnter the following information";
		             cout <<"\nFirst name : ";
		             cin  >> pc.fname;
		             cout <<"\nLast name: ";
		             cin  >> pc.lname;
		             cout <<"\nAddress: ";
		             cin  >> pc.address;
		             cout <<"\nID number: ";
		             cin  >> pc.idNum;
		             cout <<"\nPhone Number: ";
		             cin  >> pc.PhoneNo;
		             cout <<"\nDuration "
					 	  <<"\n          1: Day"
					 	  <<"\n          2: Week"
					 	  <<"\n          3: Month";
					 cout <<"\n\nChoose from the above list: ";
		             cin  >> d;
		             if(d == 1){
		             	cout <<"\nEnter the duration in day: ";
		             	cin  >> pc.dur;
		             	result = CD_2(pc.dur);
		             	
		             }else if(d == 2){
		             	cout <<"\nEnter the duration in week: ";
					    cin >> week;
					    result = CW_2(week);
		             }else if(d == 3){
		             	cout <<"\nEnter the duration in month: ";
		             	cin >> month;
		             	result = CM_2(month);
		             }
		             cout<<"Wait This Takes Few moments to proceed : "<<endl;   
				   	 Sleep(10000);
                     system("CLS");
		             cout <<"\n\nHere its what You've choosen.\n";
		             cout <<"\nFirst Name   : " << pc.fname;
		             cout <<"\nLast Name    : " << pc.lname;
		             cout <<"\nAddress      : " << pc.address;
		             cout <<"\nID number    : " << pc.idNum;
		             cout <<"\nPhone number : " << pc.PhoneNo;
		             cout <<"\nCar type     : PERODUA MYVI 1.5 SE";
		             cout <<"\nPrice        : RM" << result;
		             break;
	    	case 3 :
	    		cout <<"You've picked No_3 :\n"
		     		 <<"\nCar name      : PROTON PEREVE 1.6 SE\n\n"
		     	     <<"Daily price     : 190\n\n"
		     	     <<"Weekly price    : RM11200\n\n"
		             <<"Monthly Price   : RM2520\n";
		        cout <<"\n\nEnter the following information";
		             cout <<"\nFirst name : ";
		             cin  >> pc.fname;
		             cout <<"\nLast name: ";
		             cin  >> pc.lname;
		             cout <<"\nAddress: ";
		             cin  >> pc.address;
		             cout <<"\nID number: ";
		             cin  >> pc.idNum;
		             cout <<"\nPhone Number: ";
		             cin  >> pc.PhoneNo;
		             cout <<"\nDuration "
					 	  <<"\n          1: Day"
					 	  <<"\n          2: Week"
					 	  <<"\n          3: Month";
					 cout <<"\n\nChoose from the above list: ";
		             cin  >> d;
		             if(d == 1){
		             	cout <<"\nEnter the duration in day: ";
		             	cin  >> pc.dur;
		             	result = CD_3(pc.dur);
		             	
		             }else if(d == 2){
		             	cout <<"\nEnter the duration in week: ";
					    cin >> week;
					    result = CW_3(week);
		             }else if(d == 3){
		             	cout <<"\nEnter the duration in month: ";
		             	cin >> month;
		             	result = CM_3(month);
		             }
		             cout<<"Wait This Takes Few moments to proceed : "<<endl;   
					 Sleep(10000);
                     system("CLS");
		             cout <<"\n\nHere its what You've choosen.\n";
		             cout <<"\nFirst Name   : " << pc.fname;
		             cout <<"\nLast Name    : " << pc.lname;
		             cout <<"\nAddress      : " << pc.address;
		             cout <<"\nID number    : " << pc.idNum;
		             cout <<"\nPhone number : " << pc.PhoneNo;
		             cout <<"\nCar type     : PROTON PEREVE 1.6 SE";
		             cout <<"\nPrice        : RM" << result;
		             break;
	    	case 4 :
	    		cout <<"You've picked No_4 :\n"
		     		 <<"\nCar name      : PROTON INSPIRA 2.0 SE\n\n"
		     	     <<"Daily price     : 250\n\n"
		     	     <<"Weekly price    : RM15400\n\n"
		             <<"Monthly Price   : RM3000\n";
		        cout <<"\n\nEnter the following information";
		             cout <<"\nFirst name : ";
		             cin  >> pc.fname;
		             cout <<"\nLast name: ";
		             cin  >> pc.lname;
		             cout <<"\nAddress: ";
		             cin  >> pc.address;
		             cout <<"\nID number: ";
		             cin  >> pc.idNum;
		             cout <<"\nPhone Number: ";
		             cin  >> pc.PhoneNo;
		             cout <<"\nDuration "
					 	  <<"\n          1: Day"
					 	  <<"\n          2: Week"
					 	  <<"\n          3: Month";
					 cout <<"\n\nChoose from the above list: ";
		             cin  >> d;
		             if(d == 1){
		             	cout <<"\nEnter the duration in day: ";
		             	cin  >> pc.dur;
		             	result = CD_4(pc.dur);
		             	
		             }else if(d == 2){
		             	cout <<"\nEnter the duration in week: ";
					    cin >> week;
					    result = CW_4(week);
		             }else if(d == 3){
		             	cout <<"\nEnter the duration in month: ";
		             	cin >> month;
		             	result = CM_4(month);
		             }
		             cout<<"Wait This Takes Few moments to proceed : "<<endl;   
					 Sleep(10000);
                     system("CLS");
		             cout <<"\n\nHere its what You've choosen.\n";
		             cout <<"\nFirst Name   : " << pc.fname;
		             cout <<"\nLast Name    : " << pc.lname;
		             cout <<"\nAddress      : " << pc.address;
		             cout <<"\nID number    : " << pc.idNum;
		             cout <<"\nPhone number : " << pc.PhoneNo;
		             cout <<"\nCar type     : PROTON INSPIRA 2.0 SE";
		             cout <<"\nPrice        : RM" << result;
		             break;
	    	case 5 :
	    		cout <<"You've picked No_5 :\n"
		     		 <<"\nCar name      : HONDA CITY 1.6 SE\n\n"
		     	     <<"Daily price     : RM270\n\n"
		     	     <<"Weekly price    : RM1750\n\n"
		             <<"Monthly Price   : RM3500\n";
		        cout <<"\n\nEnter the following information";
		             cout <<"\nFirst name : ";
		             cin  >> pc.fname;
		             cout <<"\nLast name: ";
		             cin  >> pc.lname;
		             cout <<"\nAddress: ";
		             cin  >> pc.address;
		             cout <<"\nID number: ";
		             cin  >> pc.idNum;
		             cout <<"\nPhone Number: ";
		             cin  >> pc.PhoneNo;
		             cout <<"\nDuration "
					 	  <<"\n          1: Day"
					 	  <<"\n          2: Week"
					 	  <<"\n          3: Month";
					 cout <<"\n\nChoose from the above list: ";
		             cin  >> d;
		             if(d == 1){
		             	cout <<"\nEnter the duration in day: ";
		             	cin  >> pc.dur;
		             	result = CD_5(pc.dur);
		             	
		             }else if(d == 2){
		             	cout <<"\nEnter the duration in week: ";
					    cin >> week;
					    result = CW_5(week);
		             }else if(d == 3){
		             	cout <<"\nEnter the duration in month: ";
		             	cin >> month;
		             	result = CM_5(month);
		             }
		             cout<<"Wait This Takes Few moments to proceed : "<<endl;   
					 Sleep(10000);
                     system("CLS");
		             cout <<"\n\nHere its what You've choosen.\n";
		             cout <<"\nFirst Name   : " << pc.fname;
		             cout <<"\nLast Name    : " << pc.lname;
		             cout <<"\nAddress      : " << pc.address;
		             cout <<"\nID number    : " << pc.idNum;
		             cout <<"\nPhone number : " << pc.PhoneNo;
		             cout <<"\nCar type     : HONDA CITY 1.6 SE";
		             cout <<"\nPrice        : RM" << result;
		             break;
	    	case 6 :
	    		cout <<"You've picked No_6 :\n"
		     		 <<"\nCar name      : BMW Z4 3.0 SE\n\n"
		     	     <<"Daily price     : RM1600\n\n"
		     	     <<"Weekly price    : RM7700\n\n"
		             <<"Monthly Price   : RM18000\n";
		        cout <<"\n\nEnter the following information";
		             cout <<"\nFirst name : ";
		             cin  >> pc.fname;
		             cout <<"\nLast name: ";
		             cin  >> pc.lname;
		             cout <<"\nAddress: ";
		             cin  >> pc.address;
		             cout <<"\nID number: ";
		             cin  >> pc.idNum;
		             cout <<"\nPhone Number: ";
		             cin  >> pc.PhoneNo;
		             cout <<"\nDuration "
					 	  <<"\n          1: Day"
					 	  <<"\n          2: Week"
					 	  <<"\n          3: Month";
					 cout <<"\n\nChoose from the above list: ";
		             cin  >> d;
		             if(d == 1){
		             	cout <<"\nEnter the duration in day: ";
		             	cin  >> pc.dur;
		             	result = CD_6(pc.dur);
		             	
		             }else if(d == 2){
		             	cout <<"\nEnter the duration in week: ";
					    cin >> week;
					    result = CW_6(week);
		             }else if(d == 3){
		             	cout <<"\nEnter the duration in month: ";
		             	cin >> month;
		             	result = CM_6(month);
		             }
		             cout<<"Wait This Takes Few moments to proceed : "<<endl;   
					 Sleep(10000);
                     system("CLS");
		             cout <<"\n\nHere its what You've choosen.\n";
		             cout <<"\nFirst Name   : " << pc.fname;
		             cout <<"\nLast Name    : " << pc.lname;
		             cout <<"\nAddress      : " << pc.address;
		             cout <<"\nID number    : " << pc.idNum;
		             cout <<"\nPhone number : " << pc.PhoneNo;
		             cout <<"\nCar type     : BMW Z4 3.0 SE";
		             cout <<"\nPrice        : RM" << result;
		             break;
	    	case 7 :
	    		cout <<"You've picked No_7 :\n"
		     		 <<"\nCar name      : MINI COOPER COUNTRYMAN SE\n\n"
		     	     <<"Daily price     : 140 = RM1100\n\n"
		     	     <<"Weekly price    : RM(Nego)\n\n"
		             <<"Monthly Price   : RM(Nego)\n";
		        cout <<"\n\nEnter the following information";
		             cout <<"\nFirst name : ";
		             cin  >> pc.fname;
		             cout <<"\nLast name: ";
		             cin  >> pc.lname;
		             cout <<"\nAddress: ";
		             cin  >> pc.address;
		             cout <<"\nID number: ";
		             cin  >> pc.idNum;
		             cout <<"\nPhone Number: ";
		             cin  >> pc.PhoneNo;
					 cout <<"\nDuration "
					 	  <<"\n          1: Day"
					 	  <<"\n          2: Week"
					 	  <<"\n          3: Month";
					 cout <<"\n\nChoose from the above list: ";
		             cin  >> d;
		             if(d == 1){
		             	cout <<"\nEnter the duration in day: ";
		             	cin  >> pc.dur;
		             	result = CD_7(pc.dur);
		             	
		             }else if(d == 2){
		             	cout <<"\nEnter the duration in week: ";
					    cin >> week;
					    result = CW_7(week);
		             }else if(d == 3){
		             	cout <<"\nEnter the duration in month: ";
		             	cin >> month;
		             	result = CM_7(month);
		             }
		             cout<<"Wait This Takes Few moments to proceed : "<<endl;   
					 Sleep(10000);
                     system("CLS");
		             cout <<"\n\nHere its what You've choosen.\n";
		             cout <<"\nFirst Name   : " << pc.fname;
		             cout <<"\nLast Name    : " << pc.lname;
		             cout <<"\nAddress      : " << pc.address;
		             cout <<"\nID number    : " << pc.idNum;
		             cout <<"\nPhone number : " << pc.PhoneNo;
		             cout <<"\nCar type     : MINI COOPER COUNTRYMAN SE";
		             cout <<"\nPrice        : RM" << result;
		             break;
	    	case 8 :
	    		cout <<"You've picked No_8 :\n"
		     		 <<"\nCar name      : ESTIMA 2.4 SE\n\n"
		     	     <<"Daily price     : RM550\n\n"
		     	     <<"Weekly price    : RM3010\n\n"
		             <<"Monthly Price   : RM6000\n";
		        cout <<"\n\nEnter the following information";
		             cout <<"\nFirst name : ";
		             cin  >> pc.fname;
		             cout <<"\nLast name: ";
		             cin  >> pc.lname;
		             cout <<"\nAddress: ";
		             cin  >> pc.address;
		             cout <<"\nID number: ";
		             cin  >> pc.idNum;
		             cout <<"\nPhone Number: ";
		             cin  >> pc.PhoneNo;
		             cout <<"\nDuration "
					 	  <<"\n          1: Day"
					 	  <<"\n          2: Week"
					 	  <<"\n          3: Month";
					 cout <<"\n\nChoose from the above list: ";
		             cin  >> d;
		             if(d == 1){
		             	cout <<"\nEnter the duration in day: ";
		             	cin  >> pc.dur;
		             	result = CD_8(pc.dur);
		             	
		             }else if(d == 2){
		             	cout <<"\nEnter the duration in week: ";
					    cin >> week;
					    result = CW_8(week);
		             }else if(d == 3){
		             	cout <<"\nEnter the duration in month: ";
		             	cin >> month;
		             	result = CM_8(month);
		             }
		             cout<<"Wait This Takes Few moments to proceed : "<<endl;   
					 Sleep(10000);
                     system("CLS");
		             cout <<"\n\nHere its what You've choosen.\n";
		             cout <<"\nFirst Name   : " << pc.fname;
		             cout <<"\nLast Name    : " << pc.lname;
		             cout <<"\nAddress      : " << pc.address;
		             cout <<"\nID number    : " << pc.idNum;
		             cout <<"\nPhone number : " << pc.PhoneNo;
		             cout <<"\nCar type     : ESTIMA 2.4 SE";
		             cout <<"\nPrice        : RM" << result;
		             break;
	    	case 9 :
	    		cout <<"You've picked No_9 :\n"
		     		 <<"\nCar name      : PALPHARD SE\n\n"
		     	     <<"Daily price     : RM850\n\n"
		     	     <<"Weekly price    : RM3850\n\n"
		             <<"Monthly Price   : RM6800\n";
		        cout <<"\n\nEnter the following information";
		             cout <<"\nFirst name : ";
		             cin  >> pc.fname;
		             cout <<"\nLast name: ";
		             cin  >> pc.lname;
		             cout <<"\nAddress: ";
		             cin  >> pc.address;
		             cout <<"\nID number: ";
		             cin  >> pc.idNum;
		             cout <<"\nPhone Number: ";
		             cin  >> pc.PhoneNo;
		             cout <<"\nDuration "
					 	  <<"\n          1: Day"
					 	  <<"\n          2: Week"
					 	  <<"\n          3: Month";
					 cout <<"\n\nChoose from the above list: ";
		             cin  >> d;
		             if(d == 1){
		             	cout <<"\nEnter the duration in day: ";
		             	cin  >> pc.dur;
		             	result = CD_9(pc.dur);
		             	
		             }else if(d == 2){
		             	cout <<"\nEnter the duration in week: ";
					    cin >> week;
					    result = CW_9(week);
		             }else if(d == 3){
		             	cout <<"\nEnter the duration in month: ";
		             	cin >> month;
		             	result = CM_9(month);
		             }
		             cout<<"Wait This Takes Few moments to proceed : "<<endl;   
					 Sleep(10000);
                     system("CLS");
		             cout <<"\n\nHere its what You've choosen.\n";
		             cout <<"\nFirst Name   : " << pc.fname;
		             cout <<"\nLast Name    : " << pc.lname;
		             cout <<"\nAddress      : " << pc.address;
		             cout <<"\nID number    : " << pc.idNum;
		             cout <<"\nPhone number : " << pc.PhoneNo;
		             cout <<"\nCar type     : PALPHARD SE";
		             cout <<"\nPrice        : RM" << result;
		             break;
		    case 10 :
		    	cout <<"You've picked No_10 :\n"
		     		 <<"\nCar name      : HYUNDAISTAREX ROYALE\n\n"
		     	     <<"Daily price     : RM480\n\n"
		     	     <<"Weekly price    : RM2800\n\n"
		             <<"Monthly Price   : RM6000\n";
		        cout <<"\n\nEnter the following information";
		             cout <<"\nFirst name : ";
		             cin  >> pc.fname;
		             cout <<"\nLast name: ";
		             cin  >> pc.lname;
		             cout <<"\nAddress: ";
		             cin  >> pc.address;
		             cout <<"\nID number: ";
		             cin  >> pc.idNum;
		             cout <<"\nPhone Number: ";
		             cin  >> pc.PhoneNo;
		             cout <<"\nDuration "
					 	  <<"\n          1: Day"
					 	  <<"\n          2: Week"
					 	  <<"\n          3: Month";
					 cout <<"\n\nChoose from the above list: ";
		             cin  >> d;
		             if(d == 1){
		             	cout <<"\nEnter the duration in day: ";
		             	cin  >> pc.dur;
		             	result = CD_10(pc.dur);
		             	
		             }else if(d == 2){
		             	cout <<"\nEnter the duration in week: ";
					    cin >> week;
					    result = CW_10(week);
		             }else if(d == 3){
		             	cout <<"\nEnter the duration in month: ";
		             	cin >> month;
		             	result = CM_10(month);
		             }
		             cout<<"Wait This Takes Few moments to proceed : "<<endl;   
					 Sleep(10000);
                     system("CLS");
		             cout <<"\n\nHere its what You've choosen.\n";
		             cout <<"\nFirst Name   : " << pc.fname;
		             cout <<"\nLast Name    : " << pc.lname;
		             cout <<"\nAddress      : " << pc.address;
		             cout <<"\nID number    : " << pc.idNum;
		             cout <<"\nPhone number : " << pc.PhoneNo;
		             cout <<"\nCar type     : HYUNDAISTAREX ROYALE";
		             cout <<"\nPrice        : RM" << result;
		             break;
		    case 11 :
		    	cout <<"You've picked No_11 :\n"
		     		 <<"\nCar name      : VELLFIRE 2.4\n\n"
		     	     <<"Daily price     : RM900\n\n"
		     	     <<"Weekly price    : RM4200\n\n"
		             <<"Monthly Price   : RM7500\n";
		        cout <<"\n\nEnter the following information";
		             cout <<"\nFirst name : ";
		             cin  >> pc.fname;
		             cout <<"\nLast name: ";
		             cin  >> pc.lname;
		             cout <<"\nAddress: ";
		             cin  >> pc.address;
		             cout <<"\nID number: ";
		             cin  >> pc.idNum;
		             cout <<"\nPhone Number: ";
		             cin  >> pc.PhoneNo;
		             cout <<"\nDuration "
					 	  <<"\n          1: Day"
					 	  <<"\n          2: Week"
					 	  <<"\n          3: Month";
					 cout <<"\n\nChoose from the above list: ";
		             cin  >> d;
		             if(d == 1){
		             	cout <<"\nEnter the duration in day: ";
		             	cin  >> pc.dur;
		             	result = CD_11(pc.dur);
		             	
		             }else if(d == 2){
		             	cout <<"\nEnter the duration in week: ";
					    cin >> week;
					    result = CW_11(week);
		             }else if(d == 3){
		             	cout <<"\nEnter the duration in month: ";
		             	cin >> month;
		             	result = CM_11(month);
		             }
		             cout<<"Wait This Takes Few moments to proceed : "<<endl;   
				     Sleep(10000);
                     system("CLS");
		             cout <<"\n\nHere its what You've choosen.\n";
		             cout <<"\nFirst Name   : " << pc.fname;
		             cout <<"\nLast Name    : " << pc.lname;
		             cout <<"\nAddress      : " << pc.address;
		             cout <<"\nID number    : " << pc.idNum;
		             cout <<"\nPhone number : " << pc.PhoneNo;
		             cout <<"\nCar type     : VELLFIRE 2.4";
		             cout <<"\nPrice        : RM" << result;
		             break;
		    default : cout <<"Oops! wrong input ...";
	    }break;
		default : cout <<"Oops! wrong input ...";              
	}


	return 0;
}
//written by Jawid Arabzada   1328317
