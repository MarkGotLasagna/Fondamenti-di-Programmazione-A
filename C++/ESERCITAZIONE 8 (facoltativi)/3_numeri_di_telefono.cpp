#include <iostream>
#include <cstring>

using namespace std;

const int maxim = 100;

struct dati_persone{
	char nome[51];
	char numero_di_tel[51];
};

int main()
{
	dati_persone persona[maxim];
	bool init = false;
	char apg[50];
	int a=0;
	int choice;
	int op;
	do
	{
		cout<<"Inserisci il nome: ";
		cin.getline(apg, 51, '\n');
		if(!strcmp(apg, "stop")) break;	//ritorna 0 se sono uguali, 1 se non lo sono
		else strcpy(persona[a].nome, apg);
		cout<<"Inserisci il numero: ";
		cin.getline(persona[a].numero_di_tel, 51, '\n');
		a++;
	}
	while(true);
	cout<<'\n';
	cout<<"Dati inseriti!"<<endl;
	cout<<'\n';
	cout<<"Scegli ora un'operazione: "<<endl;
	cout<<"1. ricerca il numero di telefono"<<endl;
	cout<<"2. ricerca il nome"<<endl;
	cout<<"3. stampa l'intera rubrica"<<endl;
	cout<<"4. smetti"<<endl;
	do
	{
	cout<<'\n';
	cout<<"Quale operazione vuoi eseguire? ";
	cin>>op;
	switch(op)
		{
		case 1:
			char S[51];
			cin>>S;
			for(int k=0; k<a; k++)
			{
				if(!strcmp(S, persona[k].nome)) 
				{
					init = true;
					cout<<"Il numero di telefono di "<<S<<" e' "<<persona[k].numero_di_tel<<endl;
					break;
				}
			}
			if(!init) 
			{
				cout<<"Nome non trovato!"<<endl;
				cout<<'\n';
			}
			break;
		
		case 2:
			cin>>S;
			for(int k=0; k<a; k++)
			{
				if(!strcmp(S, persona[k].numero_di_tel)) 
				{
					init = true;
					cout<<"Il nome del numero "<<S<<" e' "<<persona[k].nome<<endl;
					break;
				}
			}
			if(!init) 
			{
				cout<<"Numero non trovato!"<<endl;
				cout<<'\n';
			}
			break;
		
		case 3:
			for(int j=0; j<a; j++)
				{
					cout<<'\n';
					cout<<persona[j].nome;
					cout<<'\n';
					cout<<persona[j].numero_di_tel;
					cout<<'\n';
				}
		break;
		
		case 4:
			cout<<"Programma terminato."<<endl;
			break;	
			
		default:
			cout<<"Errore!"<<endl;
		}
	}while(op != 4);

	return 0;
}
