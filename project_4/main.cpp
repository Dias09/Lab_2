#include <iostream>
#include <cmath> // Для вычисления квадратного корня
using namespace std;
int main()
{
	unsigned int Q,i;
	bool b = true;
	cout<<"Введите число:";
	cin>>Q;
	cout<<Q <<endl;
// Среди простых делителей составного числа есть хотя бы один,
// квадрат которого меньше или равен данному составному числу
	for (i=2; i<=(sqrt(Q)); i++) {
// Если остаток от деления равен 0, то число не простое
		if (Q%i==0) {
			b = false;
			break;
		}
	}
	if(b)
		cout<<"Да" <<endl;
	else
		cout<<"Нет" <<endl;
	return 0;
}