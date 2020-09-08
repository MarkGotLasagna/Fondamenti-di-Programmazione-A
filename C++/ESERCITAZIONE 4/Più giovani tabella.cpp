#include <iostream>

#include <cstring>

using namespace std;

const int n_elem=100; //numero massimo di elementi

struct persona	//creo una tabella costituita da più struct
	{char nome[50];
	int eta;
	};
persona dati_persone[n_elem];	//nome tabella

int main()
{
	int eta_min , i;
	for (i=0; i<=n_elem; i++) 	//ci riferiamo a una persona alla volta
	{
		cout<<"Immetti il cognome: ";
		cin>>dati_persone[i].nome;
		if (strcmp(dati_persone[i].nome, "stop")==0) break;
		cout<<"Immetti l'eta': ";
		cin>>dati_persone[i].eta;
		if(i==0) eta_min = dati_persone[i].eta;
		if (eta_min>dati_persone[i].eta) eta_min = dati_persone[i].eta;
	}
	cout<<"I piu' giovani sono: "<<endl;
	cout<<'\n'<<endl;
	for (;i>=0;i--) //compariamo le età
		if(eta_min==dati_persone[i].eta)
			cout<<dati_persone[i].nome<<endl;
	return 0;
}
