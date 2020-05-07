#include <iostream>
#include <time.h>
using namespace std;


Если вы видите это!!
	фывффывфыв

фывфывфыв

void F1(double*& mas, int& n)
{
	int k = 0;
	int l = 0;
	for (int i = 0; i < n; i++)
	{
		if (mas[i] < 0)
		{
			k++;
		}
		else
			l++;
	}
	double* mas1 = new double[k];
	int j = 0;
	for (int i = 0; i < n; i++)
		if (mas[i] < 0)
		{
			mas1[j] = mas[i];
			j++;
		}
	double* mas2 = new double[l];
	int f = 0;
	for (int i = 0; i < n; i++)
		if (mas[i] > 0)
		{
			mas2[f] = mas[i];
			f++;
		}
	cout << "Отрицательные" << endl;
	for (int i = 0; i < k; i++)
		cout << mas1[i] << " ";
	cout << endl;
	cout << "Положительные" << endl;
	for (int i = 0; i < l; i++)
		cout << mas2[i] << " ";
	cout << endl;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(0));
	int n = 0;
	cout << "Введите количество элементов массива" << endl;
	cin >> n;
	double* mas = new double[n];
	for (int i = 0; i < n; i++)
		mas[i]=rand()%100-50;

	F1(mas, n);

	system("pause");

	return 0;
}
