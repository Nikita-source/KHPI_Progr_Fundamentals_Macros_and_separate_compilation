/*
������ #define 3
���������������� � ����������������

���� #
*/
#include <iostream>

using namespace std;

#define Print(a) cout << #a << " = " << (a)

int main()
{
	setlocale(LC_ALL, "ru");

	int variable_X = 10;
	Print(variable_X);

	return 0;
}