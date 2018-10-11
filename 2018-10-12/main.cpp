#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	// int tal, tal1;
	 // Fungerar lika bra utan paranteser
	 // tal = (4*2+1);
	 // cout << tal << endl;
	// tal = ( 4 / 3 );
	// cout << tal << endl;
	// tal = ( 4 % 3 );
	// cout << tal << endl;
	// tal1 = 12 % 4;
	// cout << tal1 << endl;
	// int minuter = 173;
	// cout << minuter << "=" << minuter/60 << " och " << minuter%60 << endl;
	
	
	// cout << sqrt(20) << endl;
	
	// int x=4;
	// x = (x + 2);
	// cout << x << endl;
	// int i=0;
	// öka i med 1
	// i = i + 1;
	// i += 1;
	// cout << i << endl;
	// i++;
	int i = 0;
	cout << i << endl;
	// int m = ++i; // i ökar med 1, m tilldelas 1
	int m = i--; // m tilldelas 0, i ökar med 1
	cout << m << endl; // ++i medför m=1
	                   // i++ medför m=0
	cout << i << endl; // i har värdet 1
	// Fungerar på samma sätt med --
	m++;
	cout << m << endl;
	
	
	
	 return 0;
}
