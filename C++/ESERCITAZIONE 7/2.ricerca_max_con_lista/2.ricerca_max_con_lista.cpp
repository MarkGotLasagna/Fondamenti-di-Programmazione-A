#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

const int max_len=64;

struct elem {
		float info;
		elem* punt;
};

void inseriscitesta(elem* &l, float x) 
{
    elem* t;
	t = new elem;
    t->info = x;
    t->punt = l;
    l = t;
    return;
}

float ricerca_max(elem* l)
{
	float max;
    max=l->info;
    l=l->punt;
    while (l != NULL)
	{
    	if(max<l->info)max=l->info;
    	l=l->punt;
    }
    return max;
}

int main()
{
	float x;
	elem* l1 = NULL;
	char source[max_len];
	char source_txt[max_len+4];
	ifstream input;
	do
	{
		cout<<"Inserisci il nome del file: "<<endl;
		cin.getline(source, max_len);
		strcpy(source_txt, source);
		strcat(source_txt, ".txt");
		input.clear();
		input.open(source_txt);
		if(!input)
		{
			cout<<'\n';
			cout<<"L'apertura del file "<<source_txt<<" non e' riuscita!"<<endl;
			cout<<'\n';
		}
		else
		{
			cout<<'\n';
			cout<<"Apertura del file avvenuta con successo."<<endl;
			cout<<'\n';
		}
	}
	while(!input);
	while(!input.eof())
	{
		input>>x;
		if(!input)
			{
				cout<<"ERRORE! Controllare il formato dei dati!"<<endl;
				return 0;
			}
		inseriscitesta(l1, x);
	}
	cout<<"Il valore massimo e' "<<ricerca_max(l1)<<endl;
}
