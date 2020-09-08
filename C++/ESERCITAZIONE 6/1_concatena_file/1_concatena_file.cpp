#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

const int max_len=50;	//lunghezza max per ogni nome file input
const int unity_len=100;	//lunghezza max nome file output (corrisponde all'insieme delle 2 lunghezze massime file input)

int main()
{
	char source1[max_len];
	char source1_txt[max_len+4];
	char source2[max_len];
	char source2_txt[max_len+4];
	char dest[unity_len];	//nome del file di destinazione
	ifstream in1;	//creazione di uno stream di input
	do
	{
		cout<<"Inserisci il nome del 1o file di input: ";
		cin.getline(source1, max_len+4);
		strcpy(source1_txt, source1);	//copio il nome del file 'source1' in 'source1_txt'
		strcat(source1_txt, ".txt");	//concateno ".txt"
		in1.clear();	//resetta il flag 'failbit' modificato da open
		in1.open(source1_txt);	//apertura file di input
		if (!in1)
			{
				cout<<'\n';
				cout<<"Errore durante l'apertura del file "<<source1_txt<<" !"<<endl;
				cout<<'\n';
			}
		else
			{
				cout<<'\n';
				cout<<"Apertura del file "<<source1_txt<<" avvenuta con successo!"<<endl;
				cout<<'\n';
			}
	}
	while(!in1);
	
	/*Usando 'do', chiedo all'utente di rinserire il nome del file
	ogni qual volta l'apertura non giunga a buon fine*/
	  
	ifstream in2;
	do
	{
		cout<<"Inserisci il nome del 2o file di input: ";
		cin.getline(source2, max_len+4);
		strcpy(source2_txt, source2);
		strcat(source2_txt, ".txt");
		in2.clear();
		in2.open(source2_txt);
		if(!in2)
			{
				cout<<'\n';
				cout<<"Errore durante l'apertura del file "<<source2_txt<<" !"<<endl;
				cout<<'\n';
			}
		else
			{
				cout<<'\n';
				cout<<"Apertura del file "<<source2_txt<<" avvenuta con successo!"<<endl;
				cout<<'\n';
			}
	}
	while(!in2);
	strcpy(dest, source1);
	strcat(dest, "_");
	strcat(dest, source2);
	strcat(dest, ".txt");
	ofstream unity;		//creazione stream di output
	unity.open(dest);	//apertura file di output
	char a;
	a = in1.get();
	while(!in1.eof())
	{
		unity.put(a);
		a = in1.get();
	}
	char b;
	b = in2.get();
	while(!in2.eof())
	{
		unity.put(b);
		b = in2.get();
	}
	cout<<"La concatenazione dei file e' terminata!"<<endl;
	return 0;
}
