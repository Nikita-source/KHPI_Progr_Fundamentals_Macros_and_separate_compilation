/*
Пример #include 2
Многофайловый проект
Создать проект, который будет реализовывать вывод сообщения в консоль.
Функция вывода должна быть в отдельном файле и отдельном пространстве имен
*/
#include <iostream>
#include "Print.h"


using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	MyNamespace::PrintMessage("Hello World!");

	return 0;
}