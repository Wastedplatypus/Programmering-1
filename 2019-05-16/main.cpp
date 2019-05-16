#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;





int d;
int m;
int y;




string weekday(int d, int m, int y){
   /* int LeapYears = (int) y/ 4;
    cout << LeapYears << endl;
    long a = (y - LeapYears)*365 + LeapYears * 366;
    if(m >= 2) a += 31; */
    int a=0;
    int skott;
    for (int i=1900; i<y; i++)
    {
     if ( (y % 4) == 0 )
     {
		skott= 29;
		// a = a + 366;
		
	}
     else
     {
		skott= 28;
		// a = a + 365;
		
	}
	
}

    //if(m >= 3 && (int) y/4 == y/4) a += 29;
    //else if(m >= 3) a += 28;
    if(m >= 1) a += 31;
    if(m >= 2) a += skott;
    if(m >= 3) a += 31;
    if(m >= 4) a += 31;
    if(m >= 5) a += 30;
    if(m >= 6) a += 31;
    if(m >= 7) a += 30;
    if(m >= 8) a += 31;
    if(m >= 9) a += 31;
    if(m >= 10) a += 30;
    if(m >= 11) a += 31;
    if(m == 12) a += 30;
    a += d;
   // cout << "dagar " <<  a << endl;
    a = a -2;
    int veckodag = a % 7;
    cout << "veckodag " << veckodag << endl;
    /*
    int b = (a - 2)  % 7; */
    switch (veckodag){
		case 0:
        return "Sunday";
    case 1:
        return "Monday";
    case 2:
        return "Tuesday";
    case 3:
        return "Wednesday";
    case 4:
        return "Thursday";
    case 5:
        return "Friday";
    case 6:
        return "Saturday";
    case 7:
        return "Sunday";
    }
   
}

int main(){
	
	/*
	 * Hitta skottår
	 * if ( (2020 % 4) == 0 )
     cout << "Leap Year" << endl;
     */

    cin >> d >> m >> y;
    cout << weekday(d, m, y);
   
}
