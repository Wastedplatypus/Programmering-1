#include <iostream>
using namespace std;
int main()
{
	 int counter = 0;
	 int falt[5] = {11,12,13,14,15};
	 while (counter < 5)
	 {
		  cout << falt[counter] << endl;
		  counter++; // counter=counter+1
	 }
	 cout << "Samma utskrift" << endl;
	cout << falt[0] << endl;
	cout << falt[1] << endl;
	cout << falt[2] << endl;
	cout << falt[3] << endl;
	cout << falt[4] << endl;
	
	
	 return 0;
}
