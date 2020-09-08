#include <iostream>
using namespace std;
int main()
	{cout<<"Questo e' un programma per la conversione di pollici(inch) a centimetri(o viceversa)"<<endl;
	cout<<"Digita 1, in caso di conversione pollici----->centimetri, altrimenti"<< '\n'
	<<"Digita 2, per la conversione centimetri----->pollici"<<endl;
	int x;
	float a,b,k=2.54; //a=numero inserito dall'utente, b=ris. in pollici o centimetri
	cin>>x;
	while (x!=1 && x!=2)  
    {cout<<"Errore! Inserisci l'opzione corretta."<<endl;
     cin>>x;
	}
	if (x==1) {cout<<"Digita ora il tuo numero in pollici(inch) ";
    		   cin>>a;
    		   b=a*k;
    		   cout<<a<<" pollici(inch) equivalgono a "<<b<<" centimetri"<<endl;
			  }
		else {cout<<"Digita ora il tuo numero in centimetri ";
			  cin>>a;
			  b=a/k;
			  cout<<a<<"cm equivalgono a "<<b<<" pollici(inch)"<<endl;
			 }
	system ("pause");
	return 0;
	}
