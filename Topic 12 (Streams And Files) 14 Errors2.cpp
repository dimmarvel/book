// ferrors.cpp
// �������� ������ �������� �����
#include <fstream>           // ��� �������� �������
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	ifstream file;
	file.open("a:test.dat");

	if (!file)
		cout << "\n���������� ������� GROUP.DAT";
	else
		cout << "\n���� ������ ��� ������.";
	cout << "\nfile = " << &file;
	cout << "\n��� ������ = " << file.rdstate();
	cout << "\ngood() = " << file.good();
	cout << "\neof() = " << file.eof();
	cout << "\nfail() = " << file.fail();
	cout << "\nbad() = " << file.bad() << endl;
	file.close();
	system("pause");
	return 0;
}