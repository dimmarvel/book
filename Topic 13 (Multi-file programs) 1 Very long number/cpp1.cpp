#include "H1.h"

int main()
{
	setlocale(LC_ALL, "Rus");
	unsigned long numb, j;
	verylong fact = 1;       //���������������� verylong

	cout << "\n\n������� �����: ";
	cin >> numb;           //���� ����� ���� long int

	for (j = numb; j > 0; j--)  //��������� � ��� numb *
		fact = fact * j;     //  numb-1 * numb-2 *
	cout << "���������= "; //  numb-3 � �. �.
	fact.putvl();          //������� �������� ����������
	cout << endl;
	system("pause");
	return 0;
}

