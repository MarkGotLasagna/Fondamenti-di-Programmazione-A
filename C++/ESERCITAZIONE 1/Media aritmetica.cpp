#include <iostream>
using namespace std;
int main ()
	{cout<<"Inserisci i tuoi voti (voto negativo per smettere)"<<endl;
	int x,y,z,n_voti;
	float base30,base110;
	n_voti=0;
	while (x>=0)
		  {cin>>x;
		   if (x<0) cout<<"Non hai inserito alcun voto!"<<endl;
				  return 0;
				  }
		   n_voti=n_voti+1;
		   z=n_voti-1;
		   if (x<0)	{cout<<"Hai immesso "<<z<<" voti."<<endl;
		 			 base30=(float) y/z;
		 			 base110=(base30*110)/(30);
					 cout<<"La media dei tuoi voti su base 30 e' "<<base30<<endl;
					 cout<<"La media dei tuoi voti su base 110 e' "<<base110<<endl;
					}
	system ("pause");
	return 0;
	}
