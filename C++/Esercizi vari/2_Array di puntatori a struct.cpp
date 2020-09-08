#include <iostream>
using namespace std;
const int DIM = 1000;

struct dati_persona
       {char nome[100];
        char cognome[100];
        char indirizzo[200];
       };

int main() {
    dati_persona* anagrafe[DIM];
    
    char nome[100];
    
    // inizializzazione dell'array anagrafe 
    for(int i=0 ; i<DIM ; i++)
            anagrafe[i]=NULL;           
      
    int n;
    cout << "Quante dati vuoi dare? ";
    do cin >> n; while(n >= DIM);
      
    // immissione dei dati nell'array anagrafe 
    for(int i=0 ; i<n ; i++) {
            cout << "Dai nome e cognome: ";
            if (anagrafe[i]==NULL) 
                  anagrafe[i] = new dati_persona; 
            cin >> anagrafe[i] -> nome;
            cin >> anagrafe[i] -> cognome;
    }

    // eventuali elaborazioni sull'array anagrafe - DA FARE
    
    // stampa dei dati memorizzati nell'array angrafe
    cout << "\nDati letti: " << endl;   
    for(int i=0 ; i<n ; i++) {
               cout << anagrafe[i] -> nome << ' ';
               cout << anagrafe[i] -> cognome << endl;
            }
           
    system("pause");
    
    return 0;
}


/* Esempio d'uso

Dai nome e cognome: mario bianchi
Dai nome e cognome: carla verdi
Dai nome e cognome: luca rossi

Dati letti:
mario bianchi
carla verdi
luca rossi
Premere un tasto per continuare . . .

*/
