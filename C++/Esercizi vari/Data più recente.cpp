#include <iostream>
using namespace std;
struct data
	{int g; //giorno
	int m;	//mese
	int a;	//anno
	};
int main ()
	{data d1;
	data d2;
	cout<<"Dai la prima data (gg/mm/aaaa) ";
	cin>>d1.g>>d1.m>>d1.a;
	cout<<"Dai la seconda data (gg/mm/aaaa) ";
	cin>>d2.g>>d2.m>>d2.a;
	if (d1.a==d2.a && d1.m==d2.m && d1.g==d2.g) cout<<"Le date sono uguali"<<endl;
	else if (d1.a>d2.a ||
			d1.a==d2.a && d1.m>d2.m ||
			d1.g==d2.g && d1.m==d2.m && d1.g>d2.g)
			cout<<"La data più recente e' "<<d1.g<<'/'<<d1.m<<'/'<<d1.a<<endl;
	else cout<<"La data più recente e' "<<d2.g<<'/'<<d2.m<<'/'<<d2.a<<endl;
	return 0;
	}
