#include <iostream>
using namespace std;
int main()
{
float f, C;
//enter temperature in fahrenheit
cout<<"enter the temperature in fahrenheit" << "\n";
//store the value in f
cin >> f ;
//convert the fahrenheit into celsius
C=(f-32)*5/9;
//print the terminal
cout <<"temperature in celsius" << C <<"\n";
return 0;
}
