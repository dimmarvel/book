// setpers.cpp
// ���������� ��������������� ��� �������� �������� person
#pragma warning (disable:4786)     // ��� �������� (���
								   // ������������ ����� Microsoft)
#include <iostream>
#include <set>
#include <string>
using namespace std;

class person {
private:  
	string lastName;
	string firstName;
	int number;
public:
	person(string l, string f, int n) {
		lastName = l;
		firstName = f;
		number = n;
	}
	void display() const {
		cout << "�������: " << lastName <<  "\t���: " << firstName << "\t�����: " << number << endl;
	}
	friend bool operator< (const person& q1, const person& q2);
};
///////////////////////////////////////////////////////////
bool operator< (const person& q1, const person& q2) {
	if (q1.lastName == q2.lastName)
		return (q1.firstName < q2.firstName) ? true : false;
	return (q1.lastName < q2.lastName) ? true : false;

}
int main()
{                               // �������� �������� person
	setlocale(LC_ALL, "Rus");
	person pers1("Deauville", "William", 8435150);
	person pers2("McDonald", "Stacey", 3327563);
	person pers3("Bartoski", "Peter", 6946473);
	person pers4("KuangThu", "Bruce", 4157300);
	person pers5("Wellington", "John", 9207404);
	person pers6("McDonald", "Amanda", 8435150);
	person pers7("Fredericks", "Roger", 7049982);
	person pers8("McDonald", "Stacey", 7764987);
	// ��������������� ������ person
	multiset< person, less<person> > persSet;
	// �������� ����� ���������������
	multiset<person, less<person> >::iterator iter;

	persSet.insert(pers1);          // ������� ������� person � ���������������
	persSet.insert(pers2);
	persSet.insert(pers3);
	persSet.insert(pers4);
	persSet.insert(pers5);
	persSet.insert(pers6);
	persSet.insert(pers7);
	persSet.insert(pers8);

	cout << "\n����� �������: " << persSet.size() << endl;

	iter = persSet.begin();         //����� ����������� ���������������
	while (iter != persSet.end())
		(*iter++).display();
	// ��������� ����� � �������
	string searchLastName, searchFirstName;
	cout << "\n\n������� ������� �������� ��������: ";
	cin >> searchLastName;
	cout << "������� ���: ";
	cin >> searchFirstName;
	// �������� ������� � ��������� ���������� ���������
	person searchPerson(searchLastName, searchFirstName, 0);
	// ��������� ���������� ����� � ����� ������
	int cntPersons = persSet.count(searchPerson);
	cout << "����� ����� � ����� ������: " << cntPersons << endl;

	// ������� ��� ������, ���������� �������
	iter = persSet.lower_bound(searchPerson);
	while (iter != persSet.upper_bound(searchPerson))
		(*iter++).display();
	cout << endl;
	system("pause");
	return 0;
}    // end main()