// englen.cpp
// ������������ � ��������� �������� ���������� ��� �����
#include <iostream>
using namespace std;
enum posneg { pos, neg };
///////////////////////////////////////////////////////////
class Distance // ����� ��� ���������� ��� �����
{
protected:   // ��������, ��� private ������������ ������
	int feet;
	float inches;
public:
	// ����������� ��� ����������
	Distance() : feet(0), inches(0.0)
	{ }
	// ����������� � ����� �����������
	Distance(int ft, float in) : feet(ft), inches(in)
	{ }
	// ��������� �������� �� ������������
	void getdist()
	{
		cout << "\n������� ����: "; cin >> feet;
		cout << "������� �����: "; cin >> inches;
	}
	// ����� �������� �� �����
	void showdist() const
	{
		cout << feet << "\'" << inches << '\"';
	}
};
///////////////////////////////////////////////////////////
class DistSing : public Distance // ���������� ����� � �����
{
private:
	posneg sing;                 // �������� ����� ���� pos ��� neg
public:
	// ����������� ��� ����������
	DistSing() : Distance()
	{
		sing = pos;
	}
	// ����������� � ����� ��� ����� �����������
	DistSing(int ft, float in, posneg sg = pos) : Distance(ft, in)      // ����� ������������ �������� ������
	{
		sing = sg;
	}           // ��������� ��������� �����
	void getdist()           // ���� ������������� �����
	{
		Distance::getdist(); // ����� ������� getdist �� �������� ������
		char ch;               // ������ �����
		cout << "������� ���� (+ ��� -): "; cin >> ch;
		sing = (ch == '+') ? pos : neg;
	}
	void showdist() const    // ����� ����������
	{
		// ����� ���� ����������, ������� ����
		cout << ((sing == pos) ? "(+)" : "(-)");
		Distance::showdist();
	}
};
///////////////////////////////////////////////////////////
int main()
{
	setlocale(LC_ALL,"Rus");
	DistSing alpha;                   // ���������� ����������� �� ���������
	alpha.getdist();                // �������� ������ �� ������������

	DistSing beta(11, 6.25);       // ����������� � ����� �����������

	DistSing gamma(100, 5.5, neg); // ����������� � ����� �����������

	// ������� ������ ��� ���� ����������
	cout << "\nA = "; alpha.showdist();
	cout << "\nB = "; beta.showdist();
	cout << "\nC = "; gamma.showdist();
	cout << endl;
	system("pause");
	return 0;
}


