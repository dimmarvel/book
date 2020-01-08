// ���������� �������� + ��� �������� ���������� ���� Distances
#include <iostream>
using namespace std;
class Distance  // ����� ���������� ��� �����
{
private:
	int feet;
	float inches;
public:
	// ����������� ��� ����������
	Distance() : feet(0), inches(0.0)
	{ }
	// ����������� � ����� �����������
	Distance(int ft, float in) : feet(ft), inches(in)
	{ }
	// ��������� ���������� �� ������������
	void getdist()
	{
		cout << "\n������� ����: "; cin >> feet;
		cout << "������� �����: ";  cin >> inches;
	}
	// ����� ����������
	void showdist()
	{
		cout << feet << "\'-" << inches << '\"';
	}
	// �������� ���� ����
	Distance operator+ (Distance) const;
};
// �������� ���� ����
Distance Distance::operator+ (Distance d2) const
{
	int f = feet + d2.feet;       // ���������� ����
	float i = inches + d2.inches; // ���������� �����
	if (i >= 12.0)              // ���� ������ ����� ������ 12
	{
		i -= 12.0;                  // �� ��������� ����� �� 12
		f++;                        // � ����������� ���� �� 1
	}
	return Distance(f, i);     // ������� � ���������� ��������� ����������
}
///////////////////////////////////////////////////////////
int main()
{
	Distance dist1, dist3, dist4;  // ���������� ����������
	dist1.getdist();             // �������� ����������

	Distance dist2(11, 6.25);   // ���������� ���������� � ���������� ���������

	dist3 = dist1 + dist2;         // ���������� ��� ����������

	dist4 = dist1 + dist2 + dist3; // ���������� ��������� ����������

	// ����������, ��� �� � ��� ����������
	cout << "dist1 = "; dist1.showdist(); cout << endl;
	cout << "dist2 = "; dist2.showdist(); cout << endl;
	cout << "dist3 = "; dist3.showdist(); cout << endl;
	cout << "dist4 = "; dist4.showdist(); cout << endl;

	return 0;
}

// MY EXAMPLE
/*

#include <iostream>
using namespace std;

class example
{
private:
	int number;
	int number2;
public:
	example() : number(0), number2(0){ }
	example(int numb1, int numb2) : number(numb1), number2(numb2){ }
	example operator+(example d1) {
		int temp1 = number + d1.number;
		int temp2 = number2 + d1.number2;
		return example(temp1, temp2);
	}
	void get() {
		cout << "Numer1 = " << number << endl;
		cout << "Numer2 = " << number2 << endl;
	}
};

int main()
{
	example example1(20,50),example2(5,80);
	example ex3;
	ex3 = example1 + example2;

	example1.get();
	example2.get();
	ex3.get();

	cout << endl;
	system("pause");
}
*/