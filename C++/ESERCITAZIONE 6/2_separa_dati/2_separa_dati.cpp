#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

const int max_len=100;	//lunghezza massima nome file input

struct S {int c1;
		  float c2;
		 };
		 
/*In questo caso, lo 'struct' ha lo scopo di memorizzare due tipi di numeri:
un intero c1 e un float c2. I numeri sono presenti all'interno di un file,
da qui dobbiamo estrapolarli e assegnarli rispettivamente.*/

int main()
{
	char source[max_len];
	char source_txt[max_len+100];
	char out_txt1[max_len];
	char out_txt2[max_len];
	S T[1000];
	
	/*Queste stringhe si riferiscono tutte ai nomi dei file*/
	
	ifstream input;	//creazione stream input
	cout<<"Inserisci il nome del file di input: ";
	cin.getline(source, max_len);
	strcpy(source_txt, source);
	strcat(source_txt, ".txt");
	input.open(source_txt);	//apertura file input
	if(!input)
		{
			cout<<'\n';
			cout<<"Errore durante l'apertura del file "<<source_txt<<" !"<<endl;
			cout<<'\n';
			return 0;
		}
	else 
		{
			cout<<'\n';
			cout<<"Apertura del file avvenuta con successo!"<<endl;
			cout<<'\n';
		}
	strcpy(out_txt1, "campo1_di_");
	strcat(out_txt1, source);
	strcat(out_txt1, ".txt");
	strcpy(out_txt2, "campo2_di_");
	strcat(out_txt2, source);
	strcat(out_txt2, ".txt");
	ofstream out1;
	out1.open(out_txt1);
	ofstream out2;
	out2.open(out_txt2);
	int i=0;	//indice array T(input)
	while(!input.eof())
	{
		input>>T[i].c1;	//mi riferisco a c1 con file di input
		input>>T[i].c2;	//mi riferisco a c2 con file di input
		i++;			//incremento contatore in array
		if(!input)  
		{
			cout<<"ERRORE! Verificare che i dati nel file di input "<<source_txt<<" siano corretti!"<<endl;
			return 0;
		}
	}
	for(int b=0; b<i; b++)	//indice array T(output)
		{
			out1<<T[b].c1;
			out1<<'\n';
			out2<<T[b].c2;
			out2<<'\n';
		}
	return 0;
}
