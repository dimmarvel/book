// straray.cpp
// ������ �����
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
int main()
{
	setlocale(LC_ALL,"Rus");
	const int DAYS = 7; // ���������� ����� � �������
	const int MAX = 12; // ������������ ����� ������ �� ���

	// ������ �����
	char star[DAYS][MAX] =
	{
	  "�����������", "�������", "�����", "�������",
	  "�������", "�������", "�����������"
	};

	// ����� ���� ����� �� �����
	for (int j = 0; j < DAYS; j++)
		cout << star[j] << endl;
	system("pause");
	return 0;
}
