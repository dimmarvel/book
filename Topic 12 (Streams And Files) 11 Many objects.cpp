// diskfun.cpp
// ������ �� ����� � ������ ���������� ��������
#include <fstream>      // ��� �������� �������
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
class person            // ����� person
{
protected:
	char name[80];      // ��� ��������
	int age;            // ��� �������
public:
	void getData()      // �������� ������ � ��������
	{
		cout << "\n  ������� ���: "; cin >> name;
		cout << "  ������� �������: "; cin >> age;
	}
	void showData()     // ����� ������ � ��������
	{
		cout << "\n  ���: " << name;
		cout << "\n  �������: " << age;
	}
};
///////////////////////////////////////////////////////////
int main()
{
	setlocale(LC_ALL, "Rus");
	char ch;
	person pers;
	fstream file;
	file.open("GROUP.DAT", ios::in | ios::out | ios::app | ios::binary);
	char n = 'y';
	do {
		cout << "Input data:" << endl;
		pers.getData();

		file.write(reinterpret_cast<char*>(&pers), sizeof(pers));
		cout << "continye? y n" << endl;
		cin >> ch;
	} while (ch != 'n');
	file.seekg(0);
	file.read(reinterpret_cast<char*>(&pers), sizeof(pers));
	while (!file.eof()) {
		pers.showData();
		file.read(reinterpret_cast<char*>(&pers), sizeof(pers));
	}
	cout << endl;
	system("pause");
	return 0;
}