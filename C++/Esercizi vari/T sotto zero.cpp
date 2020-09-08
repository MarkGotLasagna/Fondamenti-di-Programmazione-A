#include <iostream>
using namespace std;
const int giorni=7, ore=24;	//assegno costanti
int main ()
	{float T[giorni][ore];	//array bi-dimensionale
	for(int i=0; i<giorni; i++)
		for(int j=0; j<ore; j++)
		{cout<<"Inserisci l'elemento "<<i<<"," <<j<<endl;	//inserisce 7*24 valori
		cin>>T[i][j];	//assegna i 7*24 valori a T[i][j]
		}
	int conta=0;
	for(int i=0; i<giorni; i++)
		for(int j=0; j<ore; j++)
			if (T[i][j]<0)		//se n_negativo(T sotto_zero) allora conta++
			{conta++;		//conta i giorni con T sotto-zero
			break;
			}
	cout<<"I giorni di temperatura sotto zero sono "<<conta<<endl;
	return 0;
	}
