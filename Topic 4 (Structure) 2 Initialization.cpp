#include<iostream>
//�������������
using namespace std;

struct part { //���������� ���������
	int modelnumber; //����� ������
	int partnumber; //����� ������
	float cost; //���������
};

int main() {
    // ������ ������������� ���������� ***
	part part1 = {6224,373,217.55F};
	part part2;

	cout << "Model = " << part1.modelnumber << endl;
	cout << "Cost = $" << part1.cost << endl;
	cout << "Numberpart = " << part1.partnumber << endl;


	//����� ����������� �� �� �������� ������ ���������� ���� �� ����(part)
	part2 = part1;
	cout << "Model = " << part2.modelnumber << endl;
	cout << "Cost = $" << part2.cost << endl;
	cout << "Numberpart = " << part2.partnumber << endl;
	system("pause");
}