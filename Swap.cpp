#include <iostream>
using namespace std;
void swap (int& w, int& h )
{
	int temp=w;
	w=h;
	h=temp;
}
int main ()
{
int a=0;
int b=0;
cout << "Enter a: " << endl;
cin >> a ;
cout << "Enter b: " << endl;
cin >> b ;
swap (a,b);
cout << "after swap a = "<< a << " and b = " << b << endl;
return 0;
}
