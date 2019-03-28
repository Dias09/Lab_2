#include <iostream>
using namespace std;
int main()
{
	unsigned int i,sum=0;
	do {
		cout<<"Введите число ";
		cin>>i;
		sum=sum+i;
		cout<<"Сумма = "<<sum<<endl;
	} while (i!=0);
	return 0;
}
