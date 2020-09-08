#include <iostream>

using namespace std;

int read_memo()
	{int x; //numero scelta
	do
		{
		cin>>x;
		if(x<0)cout<<"Ripeti scelta"<<endl;
		if(cin.fail())
			{
			cin.clear();
			cin.ignore(256,'\n');
			cout<<"Ripeti scelta"<<endl;
			}
		}
		while(cin.fail() || x<0);
	return x;
	}

int sq(int x) //quadrato di un numero
	{return x*x;
	}

int sum(int x) //sommatoria di un numero
	{if(x==1) return 1;
	return x+sum(x-1);
	}

int fatt(int x) //fattoriale di un numero
	{if(x==1) return 1;
	return x*fatt(x-1);	
	}

int main()
{
	int v; //valore
	int op; //operazione
	bool i=false;
	do
		{
		cout<<"Scegli una delle operazioni seguenti:"<<endl;
		cout<<"1. Leggi e memorizza"<<endl;
		cout<<"2. Quadrato"<<endl;
		cout<<"3. Sommatoria"<<endl;
		cout<<"4. Fattoriale"<<endl;
		cout<<"5. Esci"<<endl<<"Operazione scelta? ";
		op=read_memo();
		switch(op)
			{
			case 1:
				cout<<"Inserisci il nuovo valore "<<endl;
				v=read_memo();
				i=true;
				break;
			case 2:
				if(i==true)
					cout<<"Il quadrato di "<<v<<" e' "<<sq(v)<<endl;
				else
					cout<<"Prima devi dare un numero!"<<endl;
				break;
			case 3:
				if(i==true)	
					cout<<"La sommatoria da 0 a "<<v<<" e' uguale a "<<sum(v)<<endl;
				else
					cout<<"Prima devi dare un numero!"<<endl;
				break;
			case 4:
				if(i==true)
					cout<<"Il fattoriale di "<<v<<" e' "<<fatt(v)<<endl;
				else
					cout<<"Prima devi dare un numero!"<<endl;
				break;
			}
		}
		while(op!=5);
	return 0;	
}
