/*
������ #include 2
������������� ������
������� ������, ������� ����� ������������� ����� ��������� � �������.
������� ������ ������ ���� � ��������� ����� � ��������� ������������ ����
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