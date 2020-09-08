#include <iostream>

#include <cstring>

using namespace std;

const int max_len = 1001;

int main()
{
	bool pal = true;	//dice se palindroma o meno
	int a=0;
	int b;
	char c;
	int j=0;
	int i=0;
	char string[max_len];
	cout<<"Inserisci una frase: ";
	do
	{
		c=cin.get();
		if(c=='\n' || c=='.' || i==1001)
			break;
		string[i]=c;
		i++;
	}
	while(true);
	char host[i];
	for(int k=0; k<i; k++)
		{
			if(string[k] != ' ' && string[k] != '/' && string[k] != '\'')
			{
				host[j]=tolower(string[k]);	//mette tutto in lowercase
				j++;
			}
		}
	b=strlen(host)-1;	//restituisce la lunghezza della stringa
	for(a=0; a<b; a++)
		{
			if(host[a] != host[b])
			{
				pal = false;
			}
			b--;
		}
	if (pal) cout<<"La frase inserita E' palindorma!"<<endl;
	else cout<<"La frase inserita NON e' palindroma."<<endl;
	return 0;
}
