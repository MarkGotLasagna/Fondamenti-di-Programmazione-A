#include <iostream>
using namespace std;
int main ()
	{int x;
	bool prime=true;
	cout<<"Inserisci un numero massimo entro il quale"<< '\n'
	<<"verranno calcolati i numeri primi: ";
	cin>>x;
	cout<<'\n';
	for(int i=1; i<=x; i++)
		{for(int j=1; j<x; j++)
			if (i%j==0 && j!=1 && j!=i)
			{prime=false;
			break;
			}
		if(prime) cout<<i<<" ";
		prime=true;
		}
	cout<<'\n';
	return 0;
	system ("pause");
	}
