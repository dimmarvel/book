#include <fstream>
#include <iostream>
using namespace std;
#include <process.h>      // ��� exit()

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Rus");
	if (argc != 2)
	{
		cerr << "\n������ �������: otype ���_�����";

		system("pause");
		exit(-1);
	}
	char ch;                // ������ ��� ����������
	ifstream infile;        // ������� ������� ����
	infile.open(argv[1]); // ������� ����
	if (!infile)           // ��������� �� ������� ������
	{
		cerr << "\n���������� ������� " << argv[1];

		system("pause");
		exit(-1);
	}
	while (infile) { // ������� ������
		infile.get(ch);
		cout << ch;
	}
	system("pause");
	return 0;
}


