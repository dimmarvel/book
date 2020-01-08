// vitrpers.cpp
// ����������� ������� � ����� person
#include <iostream>
using namespace std;
///////////////////////////////////////////////
class person                    //����� person
{
protected:
	char name[40];
public:
	void getName()
	{
		cout << "  ������� ���: "; cin >> name;
	}
	void putName()
	{
		cout << "  ���: " << name << endl;
	}
	virtual void getData() = 0;      //������
	virtual bool isOutstanding() = 0; //�����������
									 //�������
};
////////////////////////////////////////////////
class student : public person   //����� student
{
private:
	float gpa;                //������� ����
public:
	void getData()            //��������� ������ �� ������� �
	{                       //������������
		person::getName();
		cout << "  ������� ���� �������:  "; cin >> gpa;
	}
	bool isOutstanding()
	{
		return (gpa > 3.5) ? true : false;
	}
};
////////////////////////////////////////////////
class professor : public person //����� professor
{
private:
	int numPubs;              //����� ����������
public:
	void getData()            //��������� ������ � �������� �
	{                       //������������
		person::getName();
		cout << "  ����� ����������:  "; cin >> numPubs;
	}
	bool isOutstanding()
	{
		return (numPubs > 100) ? true : false;
	}
};
////////////////////////////////////////////////
int main()
{
setlocale(LC_ALL,"Rus");
	person* persPtr[100];  //������ ���������� �� person
	int n = 0;            //����� �����, ��������� � ������ char choice;
	char choice;
	do {
		cout << " �������� (s) ��� ������� (p): ";
		cin >> choice;

		if (choice == 's')               //������� ������ ������� 
			persPtr[n] = new student;   // � ������
		else                          //������� ������
			persPtr[n] = new professor; //�������� � ������

		persPtr[n++]->getData();       //������ ������ � �������
		cout << " ������ ��� ������� (y/n)? "; //������� ���
											   //�������
		cin >> choice;
	} while (choice == 'y');       //����, ���� ����� 'y'

	for (int i = 0;i < n; i++)
	{
		persPtr[i]->putName();        //������� ��� �����,
		if (persPtr[i]->isOutstanding())        //�������� � 
			cout << "  ��� ���������� �������!\n"; //����������
	}
	system("pause");
	return 0;

