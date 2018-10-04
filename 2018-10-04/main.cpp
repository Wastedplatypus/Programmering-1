#include <iostream>
using namespace std;
int main()
{
	 // Teckenfält kan hanteras
	 // som vilket fält som helst
	/* char cf[6];
	 cf[0] = 'H';
	 cf[1] = 'e';
	 cf[2] = 'j';
	 cf[3] = ' ';
	 cf[4] = 'd';
	 cf[5] = 'u'; */
	 char cf[]={'H','e','j',' ','d','u','\0'};
	 cout << cf[0] << cf[1] << cf[2] << cf[3] << cf[4] << cf[5] << endl;
	 // Detta funkar med charfält
	 char namn[] = "Kalle";// namn[]={'K','a','l','l','e','\0'};
	 // cout skriver ut på skärmen
	 // tills '\0' tecknet påträffas
	 cout << "namn: " << namn << endl;    // '\0' tecknet
	                                      // läggs till
	                                      // automatiskt
	 cout << "cf: " << cf << endl;        // inget '\0' tecken
	                                      // läggs till, utskriften
	                                      // oförutsägbar
	 
	 return 0;
}
