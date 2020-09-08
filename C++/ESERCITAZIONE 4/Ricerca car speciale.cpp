#include <iostream>

using namespace std;

int ricerca(char A[], int i, char Del[])	//i come variabile di ricerca
	{
		while(A[i]!='\0')	//i tutti i caratteri nella stringa
			{
				for(int j=0; j<6; j++)
				if (A[i]==Del[j])
					return i;
				i++;
			}
		return -1;
	}
	
int main()
	{
		int p;
		char testo[1001];
		cout<<"Inserisci il testo, terminato da a capo: ";
		cin.getline(testo, 1001);
		do
			{
				cout<<"Inserire la posizione nel testo da cui iniziare la ricerca(>=1): ";
				cin>>p;
				if(cin.fail() || p<1)
					{
						cin.clear();
						cin.ignore(1001, '\n');
						cout<<"Errore! Inserisci una posizione corretta"<<endl;
					}
			}
		while(p<1 || cin.fail());
		char Car[6]={'.',',',';',':','!','?'};
		if (ricerca(testo, p, Car)==-1)
			cout<<"Non e' stato trovato alcun carattere speciale"<<endl;
			else cout<<"Carattere speciale in posizione "<<ricerca(testo, p, Car)+1<<endl;
		return 0;
	}
