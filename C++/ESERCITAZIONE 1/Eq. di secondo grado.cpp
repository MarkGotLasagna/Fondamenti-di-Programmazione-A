#include <iostream>
#include <cmath>
using namespace std;
int main()
	{int a,b,c,k;
	float x_1,x_2;
	cout<<"Inserisci i coefficienti dell'equazione(a,b,c)"<<endl;
	cin>>a;
	cin>>b;
	cin>>c;
	k=(b*b)-4*a*c;
	x_1=(-b+sqrt(k))/(2.0*a);
	x_2=(-b-sqrt(k))/(2.0*a);
	if (k<0) cout<<"Discriminante negativo!"<<endl;
		else if (k>0) cout<<"Le tue soluzioni sono "<<x_1<<" e "<<x_2<<endl;
		else if (k==0) cout<<"La tua soluzione e' "<<x_1<<endl;
	system ("pause");
	return 0;
	}
