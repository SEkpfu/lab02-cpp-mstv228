#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int dm, m, y;
	cout << "������� ���� ������ ��������" << endl;
	cin >> dm >> m >> y;
	int dm1, m1,y1;
	cout << "������� ������� ����" << endl;
	cin >> dm1 >> m1 >> y1;
	if (y1 > y && m1<=12 && m<=12)
	{	
		int lg = (dm1 > dm && m1 >= m && y1 > y) ? y1 - y : y1 - y - 1;
		if ((lg >= 10 && lg <= 20) || (lg>=110 && lg<=120) ) cout << "��� " << lg << " ���";
		else if (lg % 10 == 1) cout << "��� " << lg << " ���";
		else if (lg % 10 == 2 || lg % 10 == 3 || lg % 10 == 4) cout << "��� " << lg << " ����";
		
	}
	else cout << "������";
}