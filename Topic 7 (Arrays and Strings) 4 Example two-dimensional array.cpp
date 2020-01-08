// ����� ������� ������
#include <iostream>
#include <iomanip>
using namespace std;

const int DISTRICTS = 4;
const int MONTHS = 3;
int main()
{
	setlocale(LC_ALL, "Rus");
	int d, m;
	double sales[DISTRICTS][MONTHS];

	cout << endl;
	for (d = 0; d < DISTRICTS; d++)
	{
		for (m = 0; m < MONTHS; m++)
		{
			cout << "������� ����� ������ ��� ������ " << d + 1;
			cout << ", �� ����� " << m + 1 << ": ";
			cin >> sales[d][m];
		}
	}

	cout << "\n\n";
	cout << "                        �����\n";
	cout << "                1         2         3";
	
	for (d = 0; d < DISTRICTS; d++)
	{
		cout << "\n����� " << d + 1;
		for (m = 0; m < MONTHS; m++)// �������� � ��� ��� ������ ������ ���� ��� 269
			cout << setiosflags(ios::fixed) //���� ������� ������ - 3.25�2
			<< setiosflags(ios::showpoint)// ���������� �����, ����� �� 120 � 120.00
			<< setprecision(2) // ������ ����� �������, ������� ������ 2 �����
			<< setw(10)
			<< sales[d][m]; //���� �����
	}
	
	cout << endl;
	system("pause");
	return 0;
}

