/*
������ #define 4
���������������� � ����������������

���� ## - ���������
*/
#include <iostream>

using namespace std;

#define Var(a, b) ( a ## b)
#define concat(a) (a ## "ball")
#define P(a, b) (a ## b)

int main()
{
	setlocale(LC_ALL, "ru");

	cout << "ij = " << Var("i", "j") << endl;

	const int ij = 5;
	int d[Var(i, j)];
	for (int i = 0; i < ij; i++)
	{
		cout << "d[" << i << "] = " << d[i] << endl;
	}

	cout << concat("base") << endl;

	int xy = 100;
	cout << P(x, y) << endl;


	return 0;
}