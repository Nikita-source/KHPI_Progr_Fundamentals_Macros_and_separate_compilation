/*
������ #define 5
���������������� � ����������������

�������� ���������, ������� ��������� �������� � ���������
������������� ������ � �������� �������
� ������� ���������� �������� ����������
*/
#include <iostream>

using namespace std;
#define PRINT	// ����� ���� ����� ������������� (DEB, DEBUG, TT_, DEBUG_1) 
// (�� ����������� �����)

int Sum(int a, int b)
{
	return a + b;
}

int main()
{
	setlocale(LC_ALL, "ru");

	int a = 2;
	int b = 2;
	int sum = Sum(2, 2);
	// ������ ������
#if defined PRINT
	cout << "������������� ������ �������� \n����� " << a << " � " << b << " ����� " << sum << endl;
#else
	cout << "������������� ������ ���������" << endl;
#endif // PRINT

	// ������ ������
#ifdef PRINT
	cout << "������������� ������ �������� (������ ������) \n����� " << a << " � " << b << " ����� " << sum << endl;
#endif

#ifndef PRINT
	cout << "������������� ������ ��������� (������ ������)" << endl;
#endif // !PRINT

	return 0;
}