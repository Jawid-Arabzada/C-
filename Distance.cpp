//EX 5.1 QUIZ 7
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
 const int MAXHOURS = 4;
  const double STARTVAL = 0.5;
  const double STEPSIZE = 0.5;
  const int DISTANCE = 55;

  double hours;
  double distance;

  cout << " HOUR        DISTANCE\n"
       << " ----        -------- \n";

  hours = STARTVAL;
  distance = 0;
  cout << setiosflags(ios::fixed) << setiosflags(ios::showpoint)
		<< setprecision(2);

  while (hours <= MAXHOURS)
  {
    distance = DISTANCE * hours;
    cout << setw(5)  << hours
	     << setw(15) << distance << endl;
    hours = hours + STEPSIZE;
  }
	return 0;
}
