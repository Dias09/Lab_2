#include <iostream>
#include <cmath>
using namespace std;
int main()
{int Q,schetchic=0;
	cout<<"Введите число для проверку" <<endl;
	for (int i=0; ; i++) {
		cin>>Q;
		if (Q!=0) {
			for(int j=2; j<=sqrt(Q); j++) {
			if(Q%j==0)
			schetchic=schetchic+1;}
			if(schetchic<1) {
			cout<<Q<<"  Простое"<<endl;}
		schetchic=0;} // Обнуление счетчика
		else {
		break;}
	}
	return 0;
}
