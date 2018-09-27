// fält
#include <iostream>
using namespace std;
int main()
{
	// double tid[] = {9.98, 10.15, 10.04};
	// cout << "Fältet innehåller följande tider: " << endl;
	// cout << tid[0] << "/t" << tid[1] << "/t" << tid[2] << endl;
	int hf[4];
	cout << "Mata in ett heltal: ";
	cin >> hf[0];
	cout << "Mata in ett heltal: ";
	cin >> hf[1];
	cout << "Mata in ett heltal: ";
	cin >> hf[2];
	cout << "Mata in ett heltal: ";
	cin >> hf[3];
	cout << hf[0] << ' ' << hf[1] << ' ' << hf[2] << ' ' << hf[3] << endl;
	// Byta ut ett valfritt värde
	int val;
	cout << "Byt värde 1, 2, 3 eller 4 ";
	cin >> val;
	cout << "Det nya värdet: ";
	cin >> hf[val-1]; // Heltalet, indexvärdet kan vara en variabel
	cout << hf[0] << ' ' << hf[1] << ' ' << hf[2] << ' ' << hf[3] << endl;
	
	return 0;
}
