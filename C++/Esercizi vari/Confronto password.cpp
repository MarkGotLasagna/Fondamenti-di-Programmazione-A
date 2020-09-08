#include <iostream>
#include <cstring>
using namespace std;
int main ()
	{char pass[]="Ciao123"; //assegno a pass, una password qualsiasi
	char user_pass[9]; //user inserisce password max 8 caratteri (ricordare array dove A[n-1])
	int attempts=0;
	cout<<"Inserire una password(max. 8 caratteri) ";
	do
		{cin.getline(user_pass, 9);	//acquisisce la password, assegna a user_pass, 8 caratteri massimo
		if(strcmp(user_pass,pass)==0) break;	//confronta 2 cin (0 se s=r)
		else {attempts++;
			 if(attempts<3) cout<<"Password errata. Ritenta"<<endl;
			 }
		}
	while(attempts<3);
	if(attempts==3) cout<<"Accesso negato"<<endl;
	else cout<<"Accesso consentito"<<endl;
	return 0;
	}
