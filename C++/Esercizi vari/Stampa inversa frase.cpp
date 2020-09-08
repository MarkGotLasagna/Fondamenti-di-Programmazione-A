#include <iostream>
using namespace std;
const int dim=1000;
int main()
	{char frase[dim];
	cout<<"Inserire la frase"<<endl;
	char c;
	int i=0;
	do
		{c=cin.get();
		if(c=='.') break;
		frase[i]=c;
		i++;
		}
	while(i<dim);
	for(int j=i-1; j>=0; j--)		//legge frase[j] al contrario
		cout.put(frase[j]);
	return 0;
	}
