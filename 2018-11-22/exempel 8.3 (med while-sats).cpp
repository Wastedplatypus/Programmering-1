#include <iostream>
using namespace std;
int main()
{
	int hastighet[8];
	int n = 0;
	while (n < 8)
	{
		 hastighet[n] = 5*(n+1);
		 n++;
	}
	 
	n = 0;
	while (n < 8)
	{
	 cout << hastighet[n] << ' ';
		 n++;
	}
	cout << endl;
	
	
	 return 0;
}
