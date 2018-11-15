#include <iostream>
using namespace std;
int main()
{
	// Om "AND", "OR" och "icke"
	// Sidan 83
	// && (och)
	// || (eller)
	// !  (icke)
	
	// (         (false         &&      (true)          )
	// (                      (false)                   )
	if ( ( (false) || (false) ) && ( (true) && (true) ) )
	{
	    cout << "Det sammantagna yuttrycket mellan den yttre paranteserna är sant" << endl;
	
   }
   else
	    cout << "Det sammantagna yuttrycket mellan den yttre paranteserna är inte sant" << endl;
	    
// EXEMPEL
int a, b; 
cout << "Mata in två heltal  :>";
cin >> a;
cin >> b;
// ANTAG a sätts till 1, b sätts till 2
if ( ( (a) || (false) ) && ( (true) && (true) ) )
    // if ( ( (1>2) || (1<2) ) && ( (1<2) && (1<2) )  )
    // if ( ( (falsk) || (true) ) && ( (true) && (true) )  )
    // if (   (true) &&  (true)   )
    //              (true)
    // Alltså givet a=1, b=2 blir uttrycket sant
    
              cout << "SANT" << endl;
              
           else
               cout << "INTE SANT" << endl;
     
     
	 return 0;
}
