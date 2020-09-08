#include <iostream>

using namespace std;

struct elem {
       int info;
       elem* punt;
       };

bool appartiene(elem* l, int x) {        // definizione ricorsiva
       if (l == NULL) return false;
       if (l->info == x) return true;
       else return appartiene(l->punt,x);
}

int lungh(elem* l) {                     // definizione ricorsiva
       if (l == NULL) return 0;
       else return (lungh(l->punt) + 1);
}

void inseriscitesta(elem* & l, int x) {
     elem* t;
     t = new elem;
     t->info = x;
     t->punt = l;
     l = t;
     return;
}

int main() {
     elem * l1 = NULL;
     int x,y,z;
     cout << "Dai tre numeri: ";
     cin >> x >> y >> z;
     inseriscitesta(l1,x);
     inseriscitesta(l1,y);
     inseriscitesta(l1,z);
     cout << "Memorizzati " << lungh(l1) << " numeri" << endl << endl;
     int e;
     cout << "Dai un numero da cercare: ";
     cin >> e;
     if (appartiene(l1,e))
         cout << e << " appartiene" << endl << endl;
     else   cout << e << " non appartiene" << endl << endl;

     system("pause");
     return 0;
}
