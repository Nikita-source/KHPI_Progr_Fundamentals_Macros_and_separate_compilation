/*
������ #define 2
���������������� � ����������������

���������������� �������
*/
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	/*
	__FILE__	- ���������� ��� ����� (����)
	__DATE__	- ���������� ������� ����
	__TIME__	- ���������� ������� �����
	__FUNCTION__- ���������� ��� �������

	*/

	cout << __FILE__ << endl;
	cout << __DATE__ << endl;
	cout << __FUNCTION__ << endl;
	cout << __TIME__ << endl;

	return 0;
}