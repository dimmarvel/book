// copystr.cpp
// �������� ���� ������ � ������
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL,"rus");
	void copystr(char*, const char*); // �������� �������
	const char* str1 = "��������� � ����� ���������!";
	char str2[80];                    // ������ ������

	copystr(str2, str1);              // �������� ������ str1 � str2
	cout << str2 << endl;                // � ���������� ���������
	system("pause");
	return 0;
}
void copystr(char* dest, const char* str)
{
	while (*str)      // ���� �� �������� ����� ������
		*dest++ = *str++; // �������� ��
	*dest = '\0';       // ����������� ������
}