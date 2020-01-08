// times1.cpp
// ��������� �������� ������� � 24-������� ���������
// � 12-�������
/*
#include <iostream>
#include <string>
using namespace std;
///////////////////////////////////////////////////////////
class time12
{
private:
	bool pm;
	int hrs;
	int mins;
public:
	time12() : pm(true), hrs(0), mins(0)
	{ }
	time12(bool ap, int h, int m) : pm(ap), hrs(h), mins(m)
	{ }
	void display() const
	{
		cout << hrs << ':';
		if (mins < 10)
			cout << '0';
		cout << mins << ' ';
		string am_pm = pm ? "p.m." : "a.m.";
		cout << am_pm;
	}
};
///////////////////////////////////////////////////////////
class time24
{
private:
	int hours;
	int minutes;
	int seconds;
public:
	time24() : hours(0), minutes(0), seconds(0)
	{ }
	time24(int h, int m, int s) : hours(h), minutes(m), seconds(s)
	{ }
	void display() const
	{
		if (hours < 10) cout << '0';
		cout << hours << ':';
		if (minutes < 10) cout << '0';
		cout << minutes << ':';
		if (seconds < 10) cout << '0';
		cout << seconds;
	}
	operator time12 () const;
};
///////////////////////////////////////////////////////////
time24::operator time12 () const
{
	int hrs24 = hours;
	bool pm = hours < 12 ? false : true;

	int roundMins = seconds < 30 ? minutes : minutes + 1;
	if (roundMins == 60)
	{
		roundMins = 0;
		++hrs24;
		if (hrs24 == 12 || hrs24 == 24)
			pm = (pm == true) ? false : true;
	}
	int hrs12 = (hrs24 < 13) ? hrs24 : hrs24 - 12;
	if (hrs12 == 0)
	{
		hrs12 = 12;
		pm = false;
	}
	return time12(pm, hrs12, roundMins);
}
///////////////////////////////////////////////////////////
int main()
{
	setlocale(LC_ALL,"Rus");
	int h, m, s;

	while (true)
	{
		cout << "������� ����� � 24-������� �������: \n";
		cout << "  ���� (�� 0 �� 23): "; cin >> h;
		if (h > 23)
		{
			return (1);
		}
		cout << "  ������: "; cin >> m;
		cout << "  �������: "; cin >> s;

		time24 t24(h, m, s);
		cout << "�������� �����: ";
		t24.display();

		time12 t12 = t24;

		cout << "\n� 12-������� �������: ";
		t12.display();
		cout << "\n\n";
	}
	system("pause");
	return 0;
}
*/

// times2.cpp
// �������������� ������� � �������������� ������������
#include <iostream>
#include <string>
using namespace std;
///////////////////////////////////////////////////////////
class time24
{
private:
	int hours;
	int minutes;
	int seconds;
public:
	time24() : hours(0), minutes(0), seconds(0)
	{ }
	time24(int h, int m, int s) : hours(h), minutes(m), seconds(s)
	{ }
	void display() const
	{
		if (hours < 10) cout << '0';
		cout << hours << ':';
		if (minutes < 10) cout << '0';
		cout << minutes << ':';
		if (seconds < 10) cout << '0';
		cout << seconds;
	}
	int getHrs()const {
		return hours;
	}
	int getMins()const {
		return minutes;
	}
	int getSecs()const {
		return seconds;
	}
};
///////////////////////////////////////////////////////////
class time12
{
private:
	bool pm;
	int hrs;
	int mins;
public:
	time12() : pm(true), hrs(0), mins(0)
	{ }
	time12(time24);
	time12(bool ap, int h, int m) : pm(ap), hrs(h), mins(m)
	{ }
	void display() const
	{
		cout << hrs << ':';
		if (mins < 10) cout << '0';
		cout << mins << ' ';
		string am_pm = pm ? "p.m." : "a.m.";
		cout << am_pm;
	}
};
///////////////////////////////////////////////////////////
time12::time12(time24 t24)
{
	int hrs24 = t24.getHrs();

	pm = t24.getHrs() < 12 ? false : true;

	mins = (t24.getSecs() < 30) ? t24.getMins() : t24.getMins() + 1;
	if (mins == 60)
	{
		mins = 0;
		++hrs24;
		if (hrs24 == 12 || hrs24 == 24)
			pm = (pm == true) ? false : true;
	}
	hrs = (hrs24 < 13) ? hrs24 : hrs24 - 12;
	if (hrs == 0)
	{
		hrs = 12; pm = false;
	}
}
///////////////////////////////////////////////////////////
int main()
{
	setlocale(LC_ALL, "Rus");
	int h, m, s;

	while (true)
	{
		cout << "������� ����� � 24-������� �������: \n";
		cout << "  ���� (�� 0 �� 23): "; cin >> h;
		if (h > 23)
			return (1);
		cout << "  ������: "; cin >> m;
		cout << "  �������: "; cin >> s;

		time24 t24(h, m, s);
		cout << "�������� �����: ";
		t24.display();

		time12 t12 = t24;
		cout << "\n� 12-������� �������: ";
		t12.display();
		cout << "\n\n";
	}
	system("pause");
	return 0;
}
