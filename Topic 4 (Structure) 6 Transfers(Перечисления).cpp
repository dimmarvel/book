#include<iostream>
//��� ������ �� ��������� ������������ 157���.
using namespace std;

//���������� �������������� ����
enum days_of_week {Sun, Mon, Tue, Wed, Thu, Fri, Sat};

int main() {
	setlocale(LC_ALL, "Rus");
	days_of_week day1, day2; //����������� ���������� �������� ��� ������
	day1 = Mon;
	day2 = Thu;
	int diff = day2 - day1;
	cout << "������� � ����: " << diff << endl;
	if (day1 < day2) {
		cout << "day1 �������� ������, ��� day2\n";
	}
	

	system("pause");
}