#include <iostream>

using namespace std;

int main()
{
	int* A[1000]; //array di puntatori
	int n=0, x, i;
	
	/*'n' numero variabili allocate
	'x' valore in ingresso
	'i' indice in array A*/
	
	cout<<"Inserisci una sequenza di numeri interi (negativo per smettere) ";
	for(i=0; i<1000; i++)
	{
		bool f = false;
		cin>>x;
		if(x<0)	break;
		else
		{
			for(int j=0; j<i; j++)
			{
				if(x==*A[j])
				{
					A[i]=A[j];
					f = true;
				}
			}
			if(!f)
			{
				A[i] = new int;
				*A[i] = x;
				n++;
			}
		}
	}
	cout<<"Sono state allocate "<<n<<" variabili"<<endl <<"Sequenza: ";
	for(int j=0; j<i; j++)
		cout<<*A[j]<<" ";
	return 0;
}
