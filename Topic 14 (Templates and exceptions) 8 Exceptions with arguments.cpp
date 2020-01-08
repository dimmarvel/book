// xdist2.cpp
// ���������� � �����������
#include<string>
#include<iostream>
using namespace std;
///////////////////////////////////////////////////////////
class Distance            //����� ���������� ����������
{
private:
	int feet;
	float inches;
public:
	//---------------------------------------------------------
	class InchesEx        //����� ����������
	{
	public:
		string origin;   //��� ����� �������
		float iValue;    //��� �������� ����������
						 //��������
		InchesEx(string s, float in) //����������� � ����� �����������
		{
			origin = s;                //����������� ������ � ������ ��������� ������
			iValue = in;                //����������� ����������� �������� ������
		}
	};                              //����� ������ ����������
//---------------------------------------------------------
	Distance()                 //����������� (��� ����������)
	{
		feet = 0; inches = 0.0;
	}
	//---------------------------------------------------------
	Distance(int ft, float in) //����������� (2 ���������)
	{
		if (in >= 12.0)
			throw InchesEx("����������� � ����� �����������", in);
		feet = ft;
		inches = in;
	}
	//---------------------------------------------------------
	void getdist()           //�������� ������ �� ������������
	{
		cout << "\n������� ����: ";  cin >> feet;
		cout << "������� �����: ";  cin >> inches;
		if (inches >= 12.0)
			throw InchesEx("������� getdist()", inches);
	}
	//---------------------------------------------------------
	void showdist()          //������� ����������
	{
		cout << feet << "\'-" << inches << '\"';
	}
};

int main()
{
	setlocale(LC_ALL, "rus");
	try
	{
		Distance dist1(17, 3.5); //����������� � �����
								 //�����������
		Distance dist2;          //����������� ��� ����������
		dist2.getdist();         //�������� ��������
								 //������� ����������
		cout << "\ndist1 = ";  dist1.showdist();
		cout << "\ndist2 = ";  dist2.showdist();
	}
	catch (Distance::InchesEx ix)  //���������� ������
	{
		cout << "\n������ �������������. ��������: " << ix.origin
			<< ".\n  ��������� �������� ������ " << ix.iValue
			<< " ������� �������.";
	}
	cout << endl;
	system("pause");
	return 0;
}