/*
������ #include 1
������������� ������
������� ������, ������� ����� ������������� �������� ���� �����,
������� �������� ������ ���� � ��������� �����
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