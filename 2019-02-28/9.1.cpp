#include <iostream>
using namespace std;
double basareaCylinder(double radie); 
int main()
{
	double r;
	cout << "Mata in radien: ";
	cin >> r;
	double area = basareaCylinder(r);
	cout << "Basarean är " << area << endl;
		
	return 0;
}

double basareaCylinder(double radie)
{
	const double PI = 3.14159;
	double area = PI*radie*radie;
	return area;
}
