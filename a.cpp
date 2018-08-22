#include <iostream>
using namespace std;
int main()
{
float c, m, km;
//enter length in centimetre 
cout<<"enter the length in c" << "\n";
//store the value in 1c
cin >> c ;
//convert the centimetre into metre and kilometre
m = ( c/100);
km = ( c/100000);
//print the terminal
cout <<"length in metre" << m <<"\n";
cout <<"lengh in kilometre" << km <<"\n";
return 0;
}
