#include<iostream>
//��������� ���������
using namespace std;

struct Distance { //����� � ���������� �������

	int feet; //
	float inches; //
};
struct Room { //������� �������. �������

	Distance lenght; //����� ������������ ���������� DISTANCE!!!
	Distance width; //������ ������������ ���������� DISTANCE!!!
};

int main() {
	setlocale(LC_ALL, "Rus");
	Room dining;
	dining.lenght.feet = 13;
	dining.lenght.inches = 6.5f;
	dining.width.feet = 10;
	dining.width.inches = 0.0f;
	//�������������� ����� � ������ � ������������ ������
	float l = dining.lenght.feet + dining.lenght.inches / 12;
	float w = dining.width.feet + dining.width.feet / 12;


	cout << "l = " << l << "\n";
	cout << "w = " << w << "\n";

	//���������� ������� ������� � �����
	cout << "S = " << l * w << " ����� ����������\n";

	system("pause");
}