// stringin.cpp
// ������� ���������� ������
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
int main()
{
	setlocale(LC_ALL,"Rus");
	const int MAX = 80; // ������������ ������ ������
	char str[MAX];   // ���� ������

	cout << "������� ������: ";          // ���� ������
	cin >> str;

	cout << "�� �����: " << str << endl; // ����� ����������
	system("pause");
	return 0;
}


