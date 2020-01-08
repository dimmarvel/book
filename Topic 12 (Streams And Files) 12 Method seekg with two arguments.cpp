// seekg.cpp
// ����� ����������� ������� � �����
#include <fstream>        // ��� �������� �������
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
class person              // ����� person
{
protected:
	char name[80];        // ��� ��������
	int age;              // ��� �������
public:
	void getData()        // �������� ������ � ��������
	{
		cout << "\n  ������� ���: "; cin >> name;
		cout << "  ������� �������: "; cin >> age;
	}
	void showData(void)   // ����� ������ � ��������
	{
		cout << "\n  ���: " << name;
		cout << "\n  �������: " << age;
	}
};
///////////////////////////////////////////////////////////
int main()
{
	setlocale(LC_ALL, "Rus");
	person pers;                  // ������� ������ person 
	ifstream infile;              // ������� ������� ����
	infile.open("GROUP.DAT", ios::in | ios::binary); // �������
	infile.seekg(0, ios::end);
	int endpos = infile.tellg();
	int n = endpos / sizeof(pers);
	cout << "����� ������� " << n << endl;
	cout << "������� ����� �������� ";
	cin >> n;
	int posn = (n - 1) * sizeof(pers);
	infile.seekg(posn);
	infile.read(reinterpret_cast<char*>(&pers),sizeof(pers));
	pers.showData();
	cout << endl;
	system("pause");
	return 0;
}


