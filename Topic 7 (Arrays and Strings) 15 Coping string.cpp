// strcopy1.cpp
// ����������� ������ � �������������� �����
#include <iostream>
#include <cstring>
using namespace std;
///////////////////////////////////////////////////////////
int main()
{
	setlocale(LC_ALL, "Rus");
	// �������� ������
	char str1[] = "��������� ������ ������� �����.";

	const int MAX = 80; // ������������ ����� ������
	char str2[MAX];  // ���� ������

	for (int j = 0; j < strlen(str1); j++) // �������� strlen ( str1 )
	{
		str2[j] = str1[j];                  // �������� �� str1 � str2	                          
	}

	str2[strlen(str1)] = '\0'; // ��������� ������ �����

	cout << str2 << endl; // � ������� �� �����
	system("pause");
	return 0;
}


