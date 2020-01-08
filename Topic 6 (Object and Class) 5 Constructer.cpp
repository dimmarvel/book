// counter.cpp
// ������� � �������� �������
#include <iostream>
using namespace std;
//////////////////////////////////////////////////////////
class Counter
{
private:
	unsigned int count;         // �������� ��������    
public:
	Counter() : count(0) {
	cout << "Constructor work";
	} // �����������

	void inc_count()            // ����������������� ��������
	{
		count++;
	}
	int get_count()             // ��������� �������� ��������
	{
		return count;
	}
};
//////////////////////////////////////////////////////////
int main()
{
	setlocale(LC_ALL,"Rus");
	Counter c1, c2;               // ����������� � ��������������
	cout << "\nc1=" << c1.get_count(); // �����
	cout << "\nc2=" << c2.get_count();
	c1.inc_count();               // ����������������� c1
	c2.inc_count();               // ����������������� c2
	c2.inc_count();               // ����������������� c2
	cout << "\nc1=" << c1.get_count(); // �����
	cout << "\nc2=" << c2.get_count();
	cout << endl;
	system("pause");
}


