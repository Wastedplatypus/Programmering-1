// Johan Widén, uppgift 2
#include <iostream>

using namespace std;
int main()
{
	 cout << "Mata in tre flyttal: " << endl;
	 
	 double tal1;
	 cin >> tal1;
	 
	 double tal2;
	 cin >> tal2;
	 
	 double tal3;
	 cin >> tal3;
	 
	 
	 cout << "tal 1 " << tal1 << endl;
	 cout << "Tal 2 "<< tal2 << endl;
	 cout << "Tal 3 " << tal3 << endl;
	 
	 double tal4 = (tal1 + tal2 + tal3) /3;
	 
	cout << "Medelvärdet av " << tal1 << ' ' << tal2 << " och " << tal3 << " blir " << tal4 << endl;
	
	
	 return 0;
}
