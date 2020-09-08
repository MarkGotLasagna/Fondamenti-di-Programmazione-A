#include <iostream>

using namespace std;

struct data{
int g;
int m;
int a;
};

/*
bisestile sì o no
Utilizzo l'op. modulo (%), restituisce il resto della divisione,
se ottengo resto, l'anno non è bisestile
*/
bool bisestile(int a)
{
	if(a%4 && a%400) return false;
	else return true;
}

int giorni_mese(int m, int a)
{
	if (m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12) return 31;
	if (m==4 || m==6 || m==6 || m==9 || m==11) return 30;
	if(bisestile(a)) return 29;
	else return 28;
}

bool controlla_data(data d)
{
	if(d.m<1 || d.m>12)
		return false;
	if(d.g<1 || d.g>31)
		return false;
	if(giorni_mese(d.m, d.a)>=d.g)
		return true;
	return false;
}

data avanza_di_un_giorno(data d)
{
	data a;
	if(d.g<giorni_mese(d.m, d.a))
	{
		a.g = d.g+1;
		a.m = d.m;
		a.a = d.a;
	}
	else 
	{
		a.g = 1;
		if (d.m==12)
		{
			a.m = 1;
			a.a = d.a+1;
		}
		else
		{
			a.m = d.m+1;
			a.a = d.a;
		}
	}
	return a;
}

int main()
{
	int n;
	data d;
	cout<<"Inserisci una data: ";
	do
	{
		cin>>d.g;
		cin>>d.m;
		cin>>d.a;
		if(!controlla_data(d)) cout<<"La data inserita non e' corretta!"<<endl;
	}while(!controlla_data(d));
	cout<<"Inserisci il numero di giorni da incrementare (n>=0): ";
	do
	{
		cin>>n;
		if(n<0) cout<<"Errore! Inserire un numero valido: ";
	}while(n<0);
	for(int i=0; i<n; i++)
		{
			d=avanza_di_un_giorno(d);
		}
		cout<<"La nuova data e' "<<d.g<<" "<<d.m<<" "<<d.a<<" "<<endl;
	return 0;
}
