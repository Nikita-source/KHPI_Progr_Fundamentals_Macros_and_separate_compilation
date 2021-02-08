/*
Пример #include 1
Многофайловый проект
Создать проект, который будет реализовывать сложение двух чисел,
функция сложения должна быть в отдельном файле
*/
#include <iostream>
#include "Sum.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	int result = Sum(2, 3);

	cout << result << endl;

	return 0;
}