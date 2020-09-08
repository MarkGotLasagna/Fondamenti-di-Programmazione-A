#include <iostream>
using namespace std;
int main ()
	{float Voto;
	cout<<"Dammi il tuo voto(tra 0 e 10)";
	cin >>Voto;
	if (Voto<0||Voto>10) cout<<"Voto non valido"<<endl;
	else if (Voto<=5)	cout<<"Insufficiente"<<endl;
	else if (Voto<=6.5) cout<<"Sufficiente"<<endl;
	else if (Voto<=7.5) cout<<"Buono"<<endl;
	else if (Voto>7.5 && !10) cout<<"Ottimo"<<endl;
	if (Voto==10) cout<<"Maronna mia quanto cazzu se bravo uaio"<<endl;
	return 0;
	}
