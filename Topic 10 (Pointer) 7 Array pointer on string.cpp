// ptrtostr.cpp
// ������ ���������� �� ������
#include <iostream>
using namespace std;
const int DAYS = 7;

int main()
{
	setlocale(LC_ALL, "Rus");
	const char* arrptrs[DAYS] = { "�����������", "�������", "�����", "�������", "�������", "�������", "�����������" };
	for (int j = 0; j < DAYS; j++) // ������� ��� ������
		cout << arrptrs[j] << endl;
	system("pause");
	return 0;
}


