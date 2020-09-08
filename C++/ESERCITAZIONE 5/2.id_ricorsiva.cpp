#include <iostream>
#include <cstring>

using namespace std;

bool id_resto(char s[], int i)	//funzione ricorsiva
{
    if(s[i]=='\0')return true;
    if((s[i]<'a' && s[i]>'z') && s[i]!='_' && (s[i]<'A' && s[i]>'Z') && (s[i]<'0' && s[i]>'9'))
		return false;
    id_resto(s, i+1);
}
/*In breve, per quanto riguarda alla funzione id_resto : se nella stringa che noi inseriamo viene trovato il terminatore di stringa '\0',
il programma termina, se invece trova una lettera, "_", o cifra, la funzione ricorre a se stessa inserendo la nuova stringa scritta e aggiungendo 1 all'indice "i"
che indica la posizione in cui ci troviamo sulla stringa,ritornando true, ricominciando così tutto da capo, con il terminatore e così via.
*/

bool id(char s[])
{
    if((s[0]>='a' && s[0]<='z') || s[0]=='_' || (s[0]>='A' && s[0]<='Z'))
        return id_resto(s,1);
    else
        return false;
}

/*Per la funzione id : essa controlla che nella stringa, la prima cosa inserita(e soltanto quella) appartenga alla grammatica BNF da noi decisa,
se è così, richiama la funzione id_resto con parametro la stringa s appena inserita e l'indice "i"(che in questo caso è 1, siccome abbiamo solo il primo carattere inserito);
se invece non trova un carattere o una cifra validi, termina subito il programma con l'opportuno messaggio di errore.
*/

int main()
{
    char s[101];	//la nostra stringa
    cout<<"Inserisci una stringa terminata da a capo: "<<endl;
    cin.getline(s,100,'\n');	//acquisisco la stringa
    if(id(s)==false)	//se id(s) restituisce false, termino il programma con opportuno messaggio di errore
        cout<<"Errore";	//altrimenti dico che l'identificatore è corretto
    else
        cout<<"Identificatore corretto";
    return 0;
}
