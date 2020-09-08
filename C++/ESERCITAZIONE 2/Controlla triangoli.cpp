#include <iostream>
using namespace std;
int main ()
	{int a,b,c,choice;
	do
		{cout<<"Inserisci la lunghezza dei 3 lati di un triangolo"<<endl;
		cin>>a>>b>>c;
		cout<<"Scegli una delle operazioni seguenti:"<<endl
			<<"	1.tipo di triangolo;"<<endl
			<<"	2.verifica rettangolo;"<<endl
			<<"	3.cambia triangolo;"<<endl
			<<"	4.esci"<<endl;
		do
			{cout<<"Operazione scelta? "<<endl;
			cin>>choice;
			switch(choice)
				{case 1 : {if (a==b&&b==c) cout<<"Il triangolo e' EQUILATERO"<<endl;
						  else if(a==b||a==c||b==c) cout<<"Il triangolo e' ISOSCELE"<<endl;
						  else if (a!=b!=c) cout<<"Il triangolo e' SCALENO"<<endl;
						  else if (a+b<c) cout<<"Questo NON e' un triangolo"<<endl;
						  }
						  break;
				case 2 : {if ((a*a)+(b*b)==(c*c)) cout<<"Questo E' un triangolo RETTANGOLO"<<endl;
						 else cout<<"Questo NON e' un triangolo rettangolo"<<endl;
						 }
						 break;
				case 3 : ;break;
				case 4 : {cout<<"Arrivederci!"<<endl;
						 return 0;
						 }
					     break;
				}
			}
		while(choice!=3);
		}
	while(choice==3);
	return 0;
	}
