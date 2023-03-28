#include <iostream>
using namespace std;
double calculateArea (double w = 0, double h = 0)
{
	return w * h;
}
int main ()
{
	double a;
	double b;
cout << "Enter the width: " << endl;
cin >> a ;
cout << "Enter the height: " << endl;
cin >> b ;
double  ar= calculateArea(a,b);
cout << "The area is " << ar << endl;
}
