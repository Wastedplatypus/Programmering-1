// Johan widén, uppgift 1
#include <iostream>
using namespace std;
int main()
{
	int minuter;
	cout << "Ange antalet minuter: ";
	cin >> minuter;
	int timm = minuter / 60;
	minuter = minuter % 60;
	cout << "Det blir " << timm << " timmar och " << minuter << " minuter." << endl;
	 
	 
	 
	  return 0;
}
