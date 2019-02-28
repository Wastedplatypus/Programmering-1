// Johan Widén, uppgift 2
#include <iostream> 
using namespace std;
int main()
{
	double tal;
	cout << "Gissa ett tal mellan 0 och 100: ";
	cin >> tal;

	if (tal > 42)
	{
		cout << "Fel! För stort. Gissa igen: ";
	}
	if (tal < 42)
	{
		cout << "Fel! För litet. Gissa igen: ";
	}
	if (tal = 42)
	{
		cout << "Grattis du gissade rätt på försök nr ";
    }
	
	

	return 0;
}
