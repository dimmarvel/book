// blanksin.cpp
// ���� ������ � ���������
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
int main()
{
	setlocale(LC_ALL,"Rus");
		const int MAX = 80; // ������������ ����� ������
	char str[MAX];   // ���� ������

	cout << "\n������� ������: ";
	cin.get(str, MAX);
	cout << "�� �����: " << str << endl;
	system("pause");
	return 0;
}


