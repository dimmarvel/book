// ���������� ���������� ��������� �������� ����������
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	void intfrac(float, float&, float&); //prototype
	float number, intpart, fracpart;
	do {
		cout << "\n������� ������������ �����:";
		cin >> number;                          // ���� ����� �������������
		intfrac(number, intpart, fracpart);		// ���������� ����� � ������� �����
		cout << "����� ����� ����� " << intpart // ����� �����������
			<< ", ������� ����� ����� " << fracpart << endl;

	} while (number != 0.0); //���� ����� - �������

	system("pause");
}


// ��������� ����� � ������� ����� ������������� �����
void intfrac(float n, float& intp, float& fracp)
{
	long temp = static_cast<long>(n);	//�������������� � ���� ���� ����� �������� ������ �����
	intp = static_cast<float>(temp);    //����������� ������� ����� �������� �� �� �����
	fracp = n - intp;				    //�������� �� �� ����� � ����� ��� �������(temp)
}


