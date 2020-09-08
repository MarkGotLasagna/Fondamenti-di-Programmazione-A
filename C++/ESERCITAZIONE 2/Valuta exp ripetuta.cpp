#include <iostream>
using namespace std;
int main ()
	{int x,y,sol; //sol è diminutivo di soluzione
	char op,choice; //op è diminutivo di operatore
	bool errore=false;
	do
		{do
			{errore=false;
			cout<<"Dai un'espressione intera semplice: ";
			cin>>x>>op>>y;
			switch(op)
				{case '+' : sol=x+y; break;
				case '-' : sol=x-y; break;
				case '*' : sol=x*y; break;
				case '/' : case ':' :
					if (y!=0) sol=x/y;
					else {cout<<"Errore!"<<endl;
						 errore=true;
						 }
					break;
				default : cout<<"Errore!"<<endl;
				cin.ignore(32737, '\n'); //ignora tutto ciò dopo l'op errato
				errore=true;
				}
			}
		while (errore);
		if (!errore) cout<<"Il risultato e' "<<sol<<endl;
			do
				{cout<<"Vuoi continuare? (s/n) ";
				cin>>choice;
				}
			while (choice!='s'&&choice!='n');
		if (choice=='n') {cout<<"Programma terminato"<<endl;
						 break;
						 }
			}
	while (choice=='s');
	return 0;
	}
