#include <iostream>
using namespace std;
class foo
{
private:
	int alpha;        						
public:
	void NotConst()                    // ������������� �����
	{
		alpha = 99;
	}
	void getcount()const           // ����������� �� ����������� �����
	{	
		alpha = 99;
	}
};

int main()
{
	setlocale(LC_ALL,"Rus");
	
	system("pause");
}


