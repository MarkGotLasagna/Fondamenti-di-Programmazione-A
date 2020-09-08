#include <iostream>
using namespace std;
int main ()
	{for (int riga=1; riga<=10; riga++)
		{for (int Colonna=1; Colonna<=10; Colonna++)
			{cout.width(4);
			 cout<<riga*Colonna;
			}
		cout<<endl;
		}
	return 0;
	}

