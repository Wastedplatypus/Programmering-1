// Johan Widén, uppgift 4
#include <iostream>
using namespace std;
int main()
{
	cout << "Mata in timmar, minuter och sekunder. Använd heltal " << endl;
	int tid = 16827;
	cout << "Timmar: " << endl;
	int timmar = tid/3600;
	cout << "Minuter: " << endl;
	int minuter = 2400/60;
	cout << "Sekunder: " << endl;
	int sekunder = 27/1;
	
	cout << "Den inmatade tiden motsvaras av " << timmar << " timmar, " << minuter << " minuter och " << sekunder << " sekunder " << endl;
	
	
	
	 return 0;
}
