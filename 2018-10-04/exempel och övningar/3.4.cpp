// stringklassen
#include <iostream>
#include <string>
using namespace std;
int main()
{
	cout << "skriv en text. " << endl;
	string text;
	getline(cin, text);
	cout << "\nAntal tecken: " << text.length() << endl;
	
	
	
	 return 0;
}
