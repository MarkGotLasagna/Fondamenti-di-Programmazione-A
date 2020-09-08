#include <iostream>
#include <cstring>
using namespace std;
int main()
	{char p[101],s[101],c;
	do
		{int i=0;	//indice della parola (i indica ogni lettera con un numero)
		cout<<"Inserisci la prima parola: ";
		c=cin.get();
		while (c!='\n' && i<100)	//esegue cin.get() finchè trova "a capo" o raggiunge i 100 caratteri massimi consentiti
			{p[i]=c;	//assegno a p[i] quello inserito con cin.get()
			i++;
			c=cin.get();
			}
		p[i]='\0';	//termino la stringa leggendo l'ultimo carattere identificato con \0
		if(strcmp(p,"$$$")==0)
			{cout<<"Programma terminato";
			break;
			}
		i=0;
		cout<<"Inserisci la seconda parola: ";
		c=cin.get();
		while (c!='\n' && i<100) 
			{s[i]=c;
			i++;
			c=cin.get();
			}
		s[i]='\0';
		if(strcmp(s,"$$$")==0)
			{cout<<"Programma terminato";
			break;
			}
		for(int i=0;i<101;i++)	//riferendomi alla stringa
			{if(strcmp(p,s)==0)
				{cout<<"Le due parole sono uguali"<<endl;
				break;
				}
			if(p[i]=='\0')	//siccome con \0 indico l'ulitmo carattere, la stringa p diventerà la più breve
				{cout<<"La parola "<<p<<" precede "<<s<<"; "<<p<<" e' un prefisso di "<<s<<endl;
				break;
				}
			if(s[i]=='\0')	//siccome con \0 indico l'ultimo carattere, la stringa s diventerà la più breve
				{cout<<"La parola "<<s<<" precede "<<p<<"; "<<s<<" e' un prefisso di "<<p<<endl;
				break;
				}
			if(p[i]<s[i])	//se in ordine lessicografico p precede s, allora cout
				{cout<<"La parola "<<p<<" precede "<<s<<endl;
				break;
				}
			if(p[i]>s[i])	//se in ordine lessicografico s precede p, allora cout
				{cout<<"La parola "<<s<<" precede "<<p<<endl;
				break;
				}
			}
		cout<<endl;
		}
	while(true);		//siccome sempre vero, il ciclo continua finchè leggo "$$$"
	return 0;
	}
