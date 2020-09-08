#include <iostream>

using namespace std;

const int weeks=2; //numero settimane
const int days=3;  //numero giorni di calcolo

struct S {float E; //entrate
		  float U; //uscite
		  float T; //saldo giornagliero
		 };
		 
void calcola (S & q)
	{
		q.T=q.E-q.U;
		if(q.T<0) return;
		else q.T=q.T-((q.T/100)*20);
		return;
	}
		 
int main()
{
	S M[weeks][days];
	for(int i=0; i<weeks; i++)
		for(int j=0; j<days; j++)
		{cout<<"Inserisci entrate e uscite del giorno "<<j+1<<" della settimana "<<i+1<<endl;
		cin>>M[i][j].E;
		cin>>M[i][j].U;
		calcola (M[i][j]); //calcola T di M[i][j]
		cout<<"Saldo: "<<M[i][j].T<<endl;
		}
	cout<<endl;
	cout<<"Il saldo della settimana 1 e' "<<M[0][0].T+M[0][1].T+M[0][2].T<<endl;
	cout<<"Il saldo della settimana 2 e' "<<M[1][0].T+M[1][1].T+M[1][2].T<<endl;
	return 0;
}
