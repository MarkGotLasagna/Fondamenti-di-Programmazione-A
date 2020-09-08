#include <iostream>
using namespace std;
int main ()
	{int n;
	 cout<<"Immetti il numero (>=0) ";
	 do cin>>n; while (n<0);
	 int fatt=1;
	 for (int i=1; i<=n; i++)
		fatt=fatt*i;
	 cout<<"Il fattoriale di "<<n<<" e' "<<fatt<<endl;
	 return 0;
	}

