#include <iostream>
using namespace std;
void funktion (double falt[], int antal);
int main()
{
	double falt[] = {-4, -4.6, 9.9, 0};
	
	for (int i = 0; i < 4; i++)
	{
		cout << falt [i] << endl;
	}
	 funktion (falt,4);
	
	for (int i = 0; i < 4; i++)
	{
		cout << falt [i] << endl;
	}
	
	
	return 0;
}

void funktion (double falt[], int antal)
{
	for (int i = 0; i < antal; i++)
	{
		if (falt [i] !=0)
		falt [i] = falt [i] * -1;
	}
	
	
	
	
	
	
	
}
