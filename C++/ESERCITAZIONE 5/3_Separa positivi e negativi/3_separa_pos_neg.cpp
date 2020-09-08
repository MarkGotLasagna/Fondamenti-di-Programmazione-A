#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

const int n_max=100;

int main()
{
	char source[n_max];
	char source_txt[n_max+4];
	char _pos[n_max+8];
	char _neg[n_max+8];
	cout<<"Inserisci il nome del file di input: ";
	cin.getline(source, n_max+4);
	strcpy(source_txt, source);
	strcat(source_txt, ".txt");
	ifstream in_file;	//creazione di uno stream di input
	in_file.open(source_txt);	//apertura del file di input
	if (!in_file)	//se l'apertura del file non avviene con successo
		{
			cout<<"Errore durante l'apertura del file "<<source<<" !"<<endl;
			return 0;
		}
	else {
			cout<<'\n';
			cout<<"La lettura del file e' avvenuta con successo!"<<endl;
			cout<<'\n';
		 }
	strcpy(_pos, source);
	strcat(_pos, "_pos");
	strcat(_pos, ".txt");
	strcpy(_neg, source);
	strcat(_neg, "_neg");
	strcat(_neg, ".txt");
	ofstream out_pos;	//creazione di uno stream di output (n positivi)
	out_pos.open(_pos);	//apertura del file di output (n positivi)
	ofstream out_neg;	//creazione di uno stream di output (n negativi)
	out_neg.open(_neg);	//apertura del file di output (n negativi)
	int num_zero=0;
	char a;
	a = in_file.get();
	while(!in_file.eof())
		{
			if(a=='0') num_zero++;	//se durante l'acquisizione dei caratteri, viene trovato '0', allora al posto di esso num_zero++
			else
				{
					if(a!='-' && a!=' ')		//se durante l'acquisizione dei caratteri, non viene trovato "-" o ' '(spaziatura), mando in
						{						//out_pos.put(a) (il numero), insieme a out_pos.put(' ') (lo spazio tra ogni numero)
							out_pos.put(a);
							out_pos.put(' ');
						}
					if(a=='-')
						{													//se durante l'acquisizione dei caratteri, viene trovato "-", allora
							if(((a = in_file.get())!=EOF) && a!=' ')		//se a = in_file.put() è diverso da End_Of_File e ' '(spaziatura),
								{											//mando in out_neg.put('-') (il segno -), con out_neg.put(a) (il numero),
									out_neg.put('-');						//con out_neg.put(' ') (lo spazio tra ogni numero)
									out_neg.put(a);
									out_neg.put(' ');
								}
						}
				}
			a = in_file.get();	//La linea 64 ( a = in_file.get(); ) è molto importante perchè è quella che avanza la lettura all'interno del file, siccome si trova
								//all'interno del ciclo while.
		}	
	cout<<"Il numero di 0 eliminati e' "<<num_zero<<endl;
	return 0;
}
