#include <iostream>
using namespace std;
int main()
{
	int N;
	double sum=0,i;
	cout<<"Длина последовательности ";
	cin>>N;
	cout<<"Введите числа:\n";
	for(i=0; i<N; i++) {
		cin>>i;
		sum+=i;
	}
	cout<<"\n Среднее арифметическое = " <<sum/N <<endl;
	return 0;
}
