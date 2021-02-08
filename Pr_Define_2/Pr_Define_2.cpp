/*
Пример #define 2
Макроподстановки и макроопределения

Предопределенные команды
*/
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	/*
	__FILE__	- возвращает имя файла (путь)
	__DATE__	- возвращает текущую дату
	__TIME__	- возвращает текущее время
	__FUNCTION__- возвращает имя функции

	*/

	cout << __FILE__ << endl;
	cout << __DATE__ << endl;
	cout << __FUNCTION__ << endl;
	cout << __TIME__ << endl;

	return 0;
}