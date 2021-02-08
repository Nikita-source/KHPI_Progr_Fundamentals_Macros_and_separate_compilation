/*
Пример #define 1
Макроподстановки и макроопределения
Функция-макрос вычисления большиго из двух чисел
*/
#include <iostream>

using namespace std;

#define getmax(a,b) ((a) > (b) ? (a) : (b))

int main()
{
	setlocale(LC_ALL, "ru");

	int x = 5, y;
	int z;

	z = getmax(x, 2);
	cout << "z = " << z << endl;

	cout << "getmax = " << getmax(7, x) << endl;

	return 0;
}