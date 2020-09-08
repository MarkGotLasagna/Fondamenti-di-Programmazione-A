#include <iostream>
#include <cstring>

using namespace std;

struct Elem
	{char nome[101];
	int cont;
	};

void aggiorna(Elem A[], char s[], int & m)
{
    for(int i=0;i<m;i++)
	{
        if(strcmp(s,A[i].nome)==0)
			{							//controllo se la parola è già presente con STRCMP
            A[i].cont++;				//infatti se ==0 vuole dire che è presente e aggiungo
            return;						//1 al contatore
        	}
    }
    strcpy(A[m].nome,s);	//siccome la nuova parola non viene trovata, viene aggiunta
    A[m].cont=1;			//nella posizione m in qui ci troviamo e ad essa aggiunto
    m++;					//il corrispettivo contatore della parola che è 1 (aggiungedo poi m++ per indicare la posizione della nuova parola)
    return;
}

int main()
{
    int i=0,j=0,m=0;	//i lettere nella parola, j conta parole, m conta parole diverse (uniche), coincide con m in void
    Elem A[1000];		//lunghezza max stringa
    const int dim = 101;
    char s[dim];
    cout << "Inserisci il testo, terminato da a capo (max. 100 parole):"<<endl;
    char c;		//lettera singola
    
    do
	{
        c = cin.get();
        while (c != '\n' && c!=' ' && i < 100)		//finchè il carattere è diverso da invio, spazio e max lettere
            {										//continuo ad acquisire la parola(aggiungo i (lettere nella parola)) e una volta trovato uno dei 3 criteri
			s[i] = c;								//smette il ciclo interno
            i++;
            c = cin.get();
        	}
        s[i] = '\0';	//termino la parola
        if(strcmp(s,"")!=0) aggiorna(A, s, m);	//se è stato inserito qualcosa allora faccio aggiorna
        strcpy(s,"");	//devo "cancellare" la parola per ricominciare l'acquisizione, copio il nulla dentro s
        i=0;			//per ricominciare il ciclo devo partire da 0
        j++;			//conta parola quindi l'aggiunge al conta parole
    }while(c != '\n' && j<1000);
    if(m==0)	//se non sono state inserite parole
        cout<<"Non sono state inserite stringhe"<<endl;
    else
        cout<<"Numero di occorrenze di ciascuna parola nel testo: "<<endl;
    for(int k=0;k<m;k++)	//chiamo k il contatore della parola nella stringa
        cout<<A[k].nome<<" "<<A[k].cont<<endl;	//stampo la parola e quante volte compare in totale nella nostra stringa
    return 0;
}
