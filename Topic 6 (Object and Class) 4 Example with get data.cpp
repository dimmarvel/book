// ����� � ���������� ������� � �������� ��������
#include <iostream>
using namespace std;

class Distance                       //����� � ���������� �������
{
private:
	int feet;
	float inches;

public:
	void setdist(int ft, float in) //��������� �������� �����
	{
		feet = ft; inches = in;
	}
	void getdist()                   //���� ����� � ����������
	{
		cout << "\n������� ����� �����: "; cin >> feet;
		cout << "������� ����� ������: "; cin >> inches;
	}
	void showdist()                  //����� ����� �� �����
	{
		cout << feet << "\'-" << inches << '\"';
	}
};

int main()
{
	setlocale(LC_ALL,"Rus");
	Distance dist1, dist2;             // ��� �����
	dist1.setdist(11, 6.25);            // ��������� �������� ��� d1
	dist2.getdist();                   // ���� �������� ��� dist2

	// ����� ���� �� �����
	cout << "\ndist1 = "; dist1.showdist();
	cout << "\ndist2 = "; dist2.showdist();

	cout << endl;
	system("pause");
}

