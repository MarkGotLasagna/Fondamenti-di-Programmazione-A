#include <iostream>

using namespace std;

void inverti(int A[], int i, int f)
{
	int temp;	//array di appoggio
	if(i<f)
	{
		temp=A[i];
		A[i]=A[f];
		A[f]=temp;
		i++;
		f--;
		inverti(A, i, f);
	}
}

int main()
{
	int n;
	cout<<"Quanti numeri vuoi inserire(n>=0)? ";
	cin>>n;
	if(n<=0)
	{
		do
		{
			cout<<"Errore! Inserisci un valore valido: ";
			cin>>n;
		}
		while(n<=0);
	}
	int prova[n];
	cout<<"Inserisci "<<n<<" numeri: ";
	for(int a=0; a<n; a++)
		cin>>prova[a];
	inverti(prova, 0, n-1);
	for(int a=0; a<n; a++)
		cout<<prova[a]<<" ";
	return 0;
}
