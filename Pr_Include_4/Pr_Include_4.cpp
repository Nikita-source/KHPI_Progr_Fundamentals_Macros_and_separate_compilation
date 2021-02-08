/*
������ #include 4
������������� ������
���������� ����������
������ �� ���������� ���������
���������/����������/������������ ����� ������ ���������� ����������

������� ������� ���������� ������������ ������ � ������� �������� "���, ������"
������� ������ ���� � ��������� �����
������������� ������������ ����� ����� ������ ������ ���������� (����� cout � printf)
� �������� ���������� ���������� � ������� �������� ������� ���� � ��� �����
*/
#include <iostream>
#include <ctime>
#include "F_stud.h"
#include "S_stud.h"


#define N 5					// ������ �������

using namespace std;


int main()
{
	setlocale(LC_ALL, "ru");

	srand(time(NULL));

	stud spis[N];
	int max;
	// ���������� ������� �������� �� ���������� � ��������
	for (int i = 0; i < N; i++)
	{
		spis[i].name = "Name" + to_string(rand() % 10 + 1);
		spis[i].oc = rand() % 3 + 3;
		cout << spis[i].name << " " << spis[i].oc << endl;
	}

	// ����� ������� ���������� ������������ ������
	max = max_oc(spis, N);
	cout << "Print from main, max = " << max << endl;
	system("pause");

	return 0;
}