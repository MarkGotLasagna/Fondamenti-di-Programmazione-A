#include <iostream>

using namespace std;

int main()
{
	int n; //numero input
	cout<<"Inserisci la lunghezza dei cateti: ";
	cin>>n;
	if(cin.fail() || n<=0)
		do
		{
			cin.clear();
			cin.ignore(256, '\n');
			cout<<"Errore! Inserisci una lunghezza adeguata: ";
			cin>>n;
		}
		while(cin.fail() || n<=0);
	for(int x=1; x<=n; x++)	//posizione sulla riga
		{
			{
				for(int y=1; y<=x; y++)	//posizione sulla colonna
					cout<<'*';
			}
		cout<<endl;
		}
	return 0;
}
