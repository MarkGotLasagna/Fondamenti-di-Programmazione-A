#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

const int max_len=64;
const int dim=4;

int raddoppia(float* & A, int n)	//riferimento = modifica variabile in funzione e int main()
{
    float* tmp = new float[n * 2];
    for(int i=0;i<n;i++) 
    	tmp[i] = A[i];
    delete[] A;
    A=tmp;
    return n * 2;
}

float ricerca_max(float A[], int n)	//n = dimensione vettore
{
	float max=A[0];
	for(int k=1; k<n; k++)
		{
			if(A[k]>max)
			max=A[k];
		}
	return max;
}

int main()
{
	float* V=new float[dim];
	int i=0;
	int j=dim;
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
		input>>V[i];
		i++;
		if(!input)
			{
				cout<<"ERRORE! Controllare il formato dei dati!"<<endl;
				return 0;
			}
		if(i==j)
		j=raddoppia(V, j);
	}
	cout<<"Il valore massimo e' "<<ricerca_max(V, i)<<endl;
}
