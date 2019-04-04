#include <iostream>
using namespace std;
double area(double d);
int main()
{
   double d;
   cout << "Skriv in diametern på din cirkel" << endl;
   cin >> d;
   
   double a = area(d);
   cout << a;




    return 0;
}
double area(double d)
{
	double area = (3.14 *d*d)/4;
	return area;
}
