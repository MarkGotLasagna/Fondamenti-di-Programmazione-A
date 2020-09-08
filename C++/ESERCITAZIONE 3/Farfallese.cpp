#include <iostream>
using namespace std;
int main()
	{
	char frase[1001];		//array A[n-1], quindi aggiungo un elemento
	cout<<"Inserisci una frase"<<endl;
	cin.getline(frase,1001,'\n');		//inserisco al massimo 1000 caratteri e quando trovo "a capo" termino
	cout<<"In farfallese e'"<<endl;
	cout<<'\n'<<endl;
	for(int i=0;i<1001;i++)
		{
		if(frase[i]=='\0') break;		//la lettera finale di qualsiasi stringa è indicata con \0
		cout<<frase[i];
		if(frase[i]=='a' ||frase[i]=='e' ||frase[i]=='i' ||frase[i]=='o' ||frase[i]=='u' ||frase[i]=='A' ||frase[i]=='E' ||frase[i]=='I' ||frase[i]=='O' ||frase[i]=='U')
			{cout<<'f'<<frase[i];
			}
		}
	cout<<'\n'<<endl;
	return 0;
	}
