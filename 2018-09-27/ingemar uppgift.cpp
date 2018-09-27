#include <iostream>
using namespace std;
int main()
{
	char cf[3] = {'A', 'B', 'C'};
	cout << cf[0] << ' ' << cf[1] << ' ' << cf[2] << endl;
	char tmp = cf[0];
	cf[0] = cf[2];
	cout << cf[0] << ' ' << cf[1] << ' ' << cf[2] << endl;
	cf[2] = tmp;
	cout << cf[0] << ' ' << cf[1] << ' ' << cf[2] << endl;
	
	
	
	
	
	 return 0;
}
