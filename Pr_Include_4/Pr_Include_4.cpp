/*
Пример #include 4
Многофайловый проект
Раздельная компиляция
Защита от повторного включения
Включение/выключение/переключение между типами отладочной информации

Создать функцию нахождения максимальной оценки в массиве структур "имя, оценка"
Функция должна быть в отдельном файле
Предусмотреть переключение между двумя типами печати результата (через cout и printf)
В качестве отладочной информации в функции выводить текущую дату и имя файла
*/
#include <iostream>
#include <ctime>
#include "F_stud.h"
#include "S_stud.h"


#define N 5					// Размер массива

using namespace std;


int main()
{
	setlocale(LC_ALL, "ru");

	srand(time(NULL));

	stud spis[N];
	int max;
	// Заполнение массива структур со студентами и оценками
	for (int i = 0; i < N; i++)
	{
		spis[i].name = "Name" + to_string(rand() % 10 + 1);
		spis[i].oc = rand() % 3 + 3;
		cout << spis[i].name << " " << spis[i].oc << endl;
	}

	// Вызов функции вычисления максимальной оценки
	max = max_oc(spis, N);
	cout << "Print from main, max = " << max << endl;
	system("pause");

	return 0;
}