#include <iostream>
using namespace std;
int main ()
	{int x,y,z,n,e;
	cout<<"Digita l'anno corrente."<<endl;
	cin >>x; 	//inserisco l'anno corrente
	cout<<"Ora digita la tua eta' attuale."<<endl;
	cin >>y; 	//digito la mia età attuale
	cout<<"Ora digita l'anno per calcolare l'eta' passata o futura."<<endl;
	cin>>z;		//(z) è l'anno per cui voglio sapere la mia età
	n=x-y; 		//(x-y) indica l'età di nascita (n)
	e=z-n; 		//(e) è l'età ottenuta
	if (x<0||y<0||z<0||x==z) cout<<"Errore! Inisirisci valori validi."<<endl;
		else if (z<x-y) cout<<"Nell'anno "<< z <<" Non eri ancora nato/a! Riprova."<<endl;
		else if (e>y) cout<<"Nell'anno "<< z <<" avrai "<< e <<" anni."<<endl;
		else if (e<y) cout<<"Nell'anno "<< z <<" avevi "<< e <<" anni."<<endl;
	system ("pause");
	return 0;
	}
