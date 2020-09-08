#include <iostream>

using namespace std;

int main()
{
	int* A[100];	//crea un array A di puntatori
	for(int i=0; i<100; i++)
	{
		A[i] = new int;
		*A[i]=i+1;
	}
	
	/*Uso un ciclo 'for' in cui utilizzo un indice, il quale scopo è allocare valori
	per ogni puntatore in 'int* A[100]'.*/
	
	for(int i=0; i<100; i++)
	{
		cout<<*A[i]<<endl;
	}
	
	/*Uso nuovamente un ciclo 'for' per leggere e stampare i 'new int' creati
	all'interno dell'array di puntatori*/
	
	return 0;
}
