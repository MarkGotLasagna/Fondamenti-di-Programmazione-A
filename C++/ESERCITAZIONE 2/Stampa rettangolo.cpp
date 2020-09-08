#include <iostream>
using namespace std;
int main ()
	{int a,b,n_righe,n_colonne;
	char carattere; //Che l'utente inserirà e che andrà a riempire il rettangolo
	do
		{cout<<"Inserisci il numero di righe desiderato(>=2) ";
		cin>>n_righe;
		}
	while (n_righe<2);
	do
		{cout<<"Inserisci il numero di colonne desiderato(>=2) ";
		cin>>n_colonne;
		}
	while (n_colonne<2);
	cout<<"Inserisci un carattere che riempia il rettangolo ";
	cin>>carattere;
	for (int x=0; x!=n_righe; x++) //x è la posizione sulla riga, quando x!=n_righe continuo aggiungendo righe facendo x+1
		{for (int y=0; y!=n_colonne; y++) //y è la posizione sulla colonna, quando y!=n_colonne continuo aggiungendo colonne facendo y+1
			{if (x==0 || x==n_righe-1 || y==0 || y==n_colonne-1) cout<<'*' ; /*Qui dico cosa deve succedere ai lati del rettangolo: al lato destro e basso inserisco * ; 
																			   ai lati sinistro e alto faccio lo stesso*/
			else cout<<carattere; /*Siccome i lati li ho già descritti con lo stmt if, dico che il carattere selezionato dall'utente, 
									andrà a riempire lo spazio interno vuoto*/
			}
		cout<<endl; /*Va messo all'interno del primo for perchè così, quando x!=n_righe non è più soddisfatto, termina il ciclo intero*/
		}
	return 0;
	}
