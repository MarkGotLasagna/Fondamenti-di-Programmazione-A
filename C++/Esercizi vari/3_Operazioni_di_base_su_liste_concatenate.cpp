#include <iostream>

using namespace std;

struct elem {
       int info;
       elem* punt;
       };

void inserisci_testa(elem* & l, int x) {
     elem* t;
     t = new elem;
     t->info = x;
     t->punt = l;
     l = t;
     return;
}

void inserisci_fondo(elem* & l, int x) {
     if (l == NULL) inserisci_testa(l,x);
     else {
          elem* s = new elem;
          s->info = x;
          s->punt = NULL;     
		       
          elem* t = l;
          while (t->punt != NULL) 
		       t = t->punt;
          t->punt = s;
     }
     return;
}

bool estrai_testa(elem* & l, int& x)
            {if (l == NULL) return false;
             elem* t = l;           
             l = l -> punt;
             x = t -> info;
             delete t;
             return true;
            }

void stampa(elem* l) {
     while (l != NULL) {
              cout.width(6);
              cout << l->info;
              l = l->punt;
           }
     return;
}

int lungh(elem* l) {
     int n = 0;
     while (l != NULL) {
           n++;
           l = l->punt;
     }
     return n;
}

bool appartiene(elem* l, int x) {
     while (l != NULL) {
           if (l->info == x) return true;
           else l = l->punt;
     }
     return false;
}

int main() {
     elem * l1 = NULL;
     elem * l2 = NULL;
     int x;
     cout << "Dai una sequenza di numeri (negativo per smettere): " << endl;
     cin >> x;
     while (x >= 0) {
         inserisci_testa(l1,x);
		 inserisci_fondo(l2,x);
         cin >> x;
     }    
     cout << "\nLista finale 1: " << endl;
     stampa(l1);
     cout << "\nComposta da  " << lungh(l1) << " elementi" << endl;  
	    
     cout << "\nLista finale 2: " << endl;
     stampa(l2);
     cout << "\nComposta da  " << lungh(l2) << " elementi" << endl;  
     
     int z;
	 estrai_testa(l1,z);
	 cout << "\nElemento estratto: " << z << endl;
	 cout << "Lista 1 senza il primo elemento: " << endl;
     stampa(l1);
     cout << endl;
	 
     system("pause");
     return 0;
}
