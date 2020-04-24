#include <iostream>
#include <time.h>
using namespace std;

struct LAA
{
    int value;
    LAA* next;
};
void viev(LAA* l)
{

    while (l)
    {
        cout << l->value << " ";
        l = l->next;

    }
}
int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(0));
    LAA* top = NULL;//top указатель для начала,p для прохода по списку
    LAA* second = NULL;
    LAA* third = NULL;
    LAA* p = NULL;
    int n;
    cout << "Введите количество элементов списка" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        LAA* p = new LAA();
        p->value = rand() % 100 - 50;
        top = p; //Переместим указатель NULL на новый элемент 

        if (p->value < 0)
        {
            p->next = second;
            second = p;
        }
        else
        {
            p->next = third;
            third = p;
        }
    }
    cout << "Отрицательные" << endl;
    for (p = second; p; p = p->next)
    {
        cout << p->value << " ";
    }
    cout << "\n";
    cout << "Положительные" << endl;
    for (p = third; p; p = p->next)
    {
        cout << p->value << " ";
    }
    cout << "\n";
    system("pause");
    return 0;
}