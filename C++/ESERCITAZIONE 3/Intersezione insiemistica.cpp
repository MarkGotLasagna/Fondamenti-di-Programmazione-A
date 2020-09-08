#include <iostream>
using namespace std;
int main ()
	{int x, y,c=0;		//dove c è il contatore di intersezione
	bool b;		//booleana per indicare la presenza di un intersezione
	cout<<"Inserisci il numero di elementi per la prima sequenza: ";
	cin>>x;
	if (x<0)
		do
		{cout<<"Errore! Inserisci il numero di elementi per la prima sequenza: ";
		cin>>x;
		}
	while(x<0);
	int A[x];
	for(int i=0; i<x; i++)
		{cout<<"Inserisci il numero: ";
		cin>>A[i];
		}
	cout<<"Inserisci il numero di elementi per la seconda sequenza: ";
	cin>>y;
	if (y<0)
		do
		{cout<<"Errore! Inserisci il numero di elementi per la seconda sequenza: ";
		cin>>y;
		}
	while(y<0);
	int B[y];
	for(int j=0; j<y; j++)
		{cout<<"Insisci il numero: ";
		cin>>B[j];
		}
	cout<<'\n'<<endl;
	for(int i=0; i<x; i++)
		{b=false;		//resetto il valore della booleana ogni volta
		for(int j=0; j<y; j++)
			{if(A[i]==B[j])
				{
				b=true;
				c++;		//c++ per confermare l'intersezione
				break;
				}
			}
		if(c==1)
		{cout<<"L'intersezione e': "<<endl;
			cout.width(4);
			c++;
		}
		if(b==true)cout<<A[i]<<" ";
		}
	if(c==0)cout<<"Non esiste alcuna intersezione tra i due insiemi";
	cout<<'\n'<<endl;
	return 0;
	}
