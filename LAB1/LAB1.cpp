#include <iostream>



ываываыв
ыаввыаыва

#include <math.h>
using namespace std;
double f1(double n)
{
	double g = 0;
	if (n < 0)
		g = abs(n);
	else
		g = pow(n, 2);
	return g;
}
double f2(double& x) {
	x = f1(x);
	return x;
}

int main() {
	setlocale(LC_ALL, "rus");
	double a, b, c;
	cout << "Введите первое значение ";
	cin >> a;
	cout << "Введите количество ";
	cin >> b;
	cout << "Введите шаг ";
	cin >> c;
	double n = a;
	cout << endl;
	cout << "F1" << endl;
	for (int i = 1; i <= b; i++, a += c)
	{
		cout << "При x=" << a << " F1=" << f1(a);
		cout << endl;
	}
	cout << endl;
	cout << "F2" << endl;
	for (int i = 1; i <= b; i++, n += c)
	{
		cout << "F2=" << f2(n);
		cout << endl;
	}
	system("pause");
	return 0;
}
