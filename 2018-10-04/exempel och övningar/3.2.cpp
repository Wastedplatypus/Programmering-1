#include <iostream>
using namespace std;
int main()
{
	int vikt[3];
	cout << "Mata in tre heltal: ";
	cin >> vikt[0] >> vikt[1] >> vikt[2];
	int temp = vikt[0];
	vikt[0] = vikt[2];
	vikt[2] = temp;
	cout << "innehåll i fältet: " << vikt[0] << ' ' << vikt[1] << ' ' 
	     << vikt[2] << endl;
	
	
	
	 return 0;
}
