// Teckenfält
#include <iostream>
using namespace std;
int main()
{
	cout << "Mata in ett engelskt ord: ";
	char engOrd[20];
	cin >> engOrd;
	char sveOrd[20];
	cout << "Mata in den svenska översättningen: ";
	cin >> sveOrd;
	cout << "Det engelska ordet " << engOrd
	     << " betyder " << sveOrd << " på svenska.";
	
	
	
	 return 0;
}
