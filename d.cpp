#include <iostream>
using namespace std;
int main()
{
float days , weeks, year;
//enter number of days
cout<<"enter the number of days" << "\n";
//store the value in days
cin >> days ;
//convert the days into weeks and year
weeks = (days/7);
year = (days/365);
//print the terminal
cout <<"number of weeks" << weeks <<"\n";
cout <<"number of year" << year <<"\n";
return 0;
}
