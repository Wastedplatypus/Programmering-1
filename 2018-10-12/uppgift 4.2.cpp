#include <iostream>
using namespace std;
int main()
{
	 cout << "Mata in ett heltal ";
	 int tal;
	 cin >> tal;
	 int tmp=tal;
	 tal++;
	 tal*=2;
	 tal-=6;
	 tal/=2;
	 tal+=3;
	 tal-=tmp;
	 cout << "Nu har du fått talet " << tal << endl;
	
	
	
	
	 return 0;
}
