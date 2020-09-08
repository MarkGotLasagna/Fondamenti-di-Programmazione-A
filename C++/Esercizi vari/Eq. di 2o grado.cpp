#include <iostream>
#include <cmath>
using namespace std;
bool eq_2(int a, int b, int c, float&x_1, float&x_2)
	{int delta;
	delta=b*b-4*a*c;
	if(delta>=0)
		{x_1=-b+sqrt(delta)/(2*a);
		x_2=-b-sqrt(delta)/(2*a);
		return true;
		}
	else return false;
	}
	int main ()
		{int x,y,z;
		float sol_1, sol_2;
		cout<<"Inserire i coefficienti dell'equazione ";
		cin>>x>>y>>z;
		if (eq_2(x,y,z,sol_1,sol_2)) cout<<sol_1<<sol_2<<endl;
		else cout<<"Discriminante negativo!"<<endl;
		return 0;
		}
	
