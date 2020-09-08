#include <iostream>
using namespace std;
int main ()
	{int dim, picco=0;		//picco come contatore
	bool b;
	do
		{cout<<"Inserisci la dimensione della matrice: ";
		cin>>dim;
		if(dim<3 || dim>100)cout<<"Errore!";
		}
		while(dim<3 || dim>100);
	int A[dim][dim];
	cout<<"Immetti ora le altitudini: ";
	for (int i=0; i<dim; i++)
		for (int j=0; j<dim; j++)
			cin>>A[i][j];
	cout<<"La matrice data e' costituita dai seguenti elementi:"<<endl;
	cout<<'\n'<<endl;
	for (int i=0; i<dim; i++)
		{for (int j=0; j<dim; j++)
			{cout.width(4);
			cout<<A[i][j];
			}
		cout<<endl;
		}
	cout<<'\n'<<endl;
	for(int i=1;i<dim-1;i++)
		for(int j=1;j<dim-1;j++)
			{if(A[i][j]>A[i-1][j] && A[i][j]>A[i+1][j] && A[i][j]>A[i][j-1] && A[i][j]>A[i][j+1])	//non considero i lati della matrice
				{picco++;
				cout<<"Picco "<<A[i][j]<<" in posizione ["<<i+1<<"] ["<<j+1<<"]"<<endl;
				}
			else break;
			}
	if (picco==0) cout<<"Non esistono picchi nella matrice data";
	return 0;
	}
