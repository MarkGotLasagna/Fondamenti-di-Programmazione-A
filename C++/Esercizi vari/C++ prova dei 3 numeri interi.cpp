/*Questo codice è un esempio del primo esercizio svolto a lezione*/
/*Si tratta di uno, capace di trovare la media (m) tra 3 numeri interi (x, y, z)*/

#include <iostream>

using namespace std;

int main ()

	{
	int x, y, z;
	float m;
	cout << "Dammi 3 numeri interi" << endl;
	cin >> x >> y >> z;
	m = (x + y + z) / 3.0;
	cout << "La tua media è" << m << endl;
	return 0;
	}
