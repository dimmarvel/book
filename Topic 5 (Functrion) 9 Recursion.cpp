// ������� ���������� ����� � ������� ��������
#include <iostream>
using namespace std;

unsigned long factfunc(unsigned long); // ��������
int main()
{
	setlocale(LC_ALL,"Rus");
	int n = 5;                               // �����, �������� �������������
	unsigned long fact;                  // ��������� ����� �����
	fact = factfunc(n);
	cout << "��������� ����� " << n << " ����� " << fact << endl;
	system("pause");
}

// ���������� ������������ ��������� �����
unsigned long factfunc(unsigned long n)
{

	if (n > 1) {
		return n *factfunc(n-1);
	}
	else {
		return 1;
	}

}


