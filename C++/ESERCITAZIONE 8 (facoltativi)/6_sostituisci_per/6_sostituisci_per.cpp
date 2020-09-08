#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

const int max_len=50;

int main()
{
	char a;
	int i=0, c=0;
	char source[max_len];
	char source_txt[max_len+4];
	char dest[60];
	ifstream input;
	cout<<"Inserisci il nome del file di input: ";
	cin.getline(source, max_len);
	strcpy(source_txt, source);
	input.clear();
	input.open(source_txt);
	if(!input)
	{
		strcat(source_txt, ".txt");
		input.open(source_txt);
		if (!input)
		{
			cout<<'\n';
			cout<<"Errore durante l'apertura del file!"<<endl;
			cout<<'\n';
			return 0;
		}
	}
	strcpy(dest, "nuovo_");
	strcat(dest, source_txt);
	ofstream out;
	out.open(dest);
	do
	{
		a = input.get();
		if(a == 'p')
		{
			a = input.get();
			if(a == 'e')
			{
				a = input.get();
				if(a == 'r')
				{
					out.put('x');
					c++;
				}
				else
				{
					out.put('p');
					out.put('e');
					if(a != EOF)
						out.put(a);
				}
			}
			else
			{
				out.put('p');
				if(a != EOF)
					out.put(a);
			}
		}
		else
		{
			if(a != EOF)
				out.put(a);
		}
	}while(a != EOF);
	cout<<"Numero di sostituzioni avvenute: "<<c;
	return 0;
}
