#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

const int max_len=64;

struct list{
	int info;
	list* punt;
};

void inserisci_list(list*&e, int x)
{
	list* t;
	t=new list;
	t -> info=x;
	t -> punt=e;
	e=t;
	return;
}

bool confronta(list *m1, list *m2)
{
	while(m1 != NULL && m2 != NULL)
	{
		if(m1->info != m2->info)
			return false;
		m1=m1->punt;
		m2=m2->punt;
	}
	if(m1==NULL && m2==NULL)
		return true;
	return false;
}

int main()
{
	list *s1=NULL;
	list *s2=NULL;
	int app;
	char file1[max_len];
	char file1_txt[max_len+4];
	char file2[max_len];
	char file2_txt[max_len+4];
	ifstream in1;
	cout<<"Inserisci il nome del 1o file di input: ";
	cin.getline(file1, max_len);
	strcpy(file1_txt, file1);
	strcat(file1_txt, ".txt");
	in1.open(file1_txt);
	if(!in1)
	{
		cout<<"ERRORE durante l'apertura del file!"<<endl;
		return 0;
	}
	else
	{
		cout<<'\n';
		cout<<"Apertura avvenuta con successo."<<endl;
		cout<<'\n';
	}
	while(!in1.eof())
	{
		in1>>app;
		inserisci_list(s1, app);
	}
	ifstream in2;
	cout<<"Inserisci il nome del 2o file di input: ";
	cin.getline(file2, max_len);
	strcpy(file2_txt, file2);
	strcat(file2_txt, ".txt");
	in2.open(file2_txt);
	if(!in2)
	{
		cout<<"ERRORE durante l'apertura del file!"<<endl;
		return 0;
	}
	else
	{
		cout<<'\n';
		cout<<"Apertura avvenuta con successo."<<endl;
		cout<<'\n';
	}
	while(!in2.eof())
	{
		in2>>app;
		inserisci_list(s2, app);
	}
	if(confronta(s1, s2)) cout<<"Le liste sono uguali!"<<endl;
	else cout<<"Le liste sono diverse."<<endl;
	return 0;
}