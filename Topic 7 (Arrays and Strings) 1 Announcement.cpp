// ����������� � ����� �� ����� ����������, ��������� �������������
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Rus");
	int age[4];
	for (int j = 0; j < 4; j++)
	{
		cout << "������� �������: ";
		cin >> age[j];
	}
	for (int j = 0; j < 4; j++)
		cout << "�� �����: " << age[j] << endl;

	system("pause");
}


