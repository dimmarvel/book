// ������������� ����������� ��������� ����������
#include <iostream>
using namespace std;

float getavg(float);    // �������� �������

int main()
{
	setlocale(LC_ALL,"Rus");
	float data = 1, avg;
	while (data != 0)
	{
		cout << "������� �����: ";
		cin >> data;
		avg = getavg(data);
		cout << "������� ��������: " << avg << endl;
	}

	system("pause");
}

// ������� ������� �������������� ���� ��������� ��������
float getavg(float newdata)
{
	static float total = 0;    // ������������� �����������
	static int count = 0;      // ���������� ��� ������ ������
	count++;                   // ���������� ��������
	total += newdata;          // ���������� ������ �������� � �����
	return total / count;      // ������� ������ �������� ��������
}


