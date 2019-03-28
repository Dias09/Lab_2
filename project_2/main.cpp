#include <iostream>
using namespace std;
int main()
{
	int i,x;
	cout<<"Введите искомое число ";
	cin>>x;

	do {
		cout<<"Введите число ";
		cin>>i;
		if (i==x) {
			cout<<"Найдено"<<endl;
			cout<<x<<endl;
			return 0;
		}
	} while (i!=0);
	cout<<"Не найдено"<<endl;
	return 0;
}
