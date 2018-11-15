#include <iostream>
using namespace std;
int main()
{
	double alder;
	cout << "Ange din ålder: ";
	cin >> alder;
	// if (alder > 15 && alder < 65)
	// {
	//   cout << "Det blir 10 kr.";
   // }
	// else
	// {
	//  cout << "Det blir 5 kr.";
	// }
	
	if (alder <= 15 || alder >= 65)
	{
	   cout << "Det blir 5 kr.";
   }
	else
	{
	  cout << "Det blir 10 kr.";
	}
	
	
	 return 0;
}
