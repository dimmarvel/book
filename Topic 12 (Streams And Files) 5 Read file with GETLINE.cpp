// iline.cpp
// �������� ���� (���������� �� �����) ����� 
#include <fstream>             // ��� �������� �������
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL,"Rus");
	const int MAX = 80;          // ������ ������
	char buffer[MAX];            // ����� �������� 
	ifstream infile("qweasdfrqwt.txt"); // ������� ������� ����
	while (!infile.eof())       // ���� �� EOF
	{
		infile.getline(buffer, MAX); // ������ ������ ������
		cout << buffer << endl;      // � ������� ��
	}

	return 0;
}


