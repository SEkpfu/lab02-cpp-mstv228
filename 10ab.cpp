#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");

	double x, y, z;
	cout << "������� ������� ���������� 3���������" << endl;
	cin >> x >> y >> z;
	if (x <= 0 || y <= 0 || z <= 0) cout << "������";
	else
	{
		if (x + y > z && x + z > y && y + z > x)
		{
			double a, b, c; // ������������, ������� � ���������� �� ������ ������������
			a = max(max(x, y), z);
			c = min(min(x, y), z);
			b = x + y + z - a - c;


			if (x == y && y == z) cout << "����������� ���������� � �� ��������������";
			else if ((x == y && x != z) || (x == z && x != y) || (y == z and y != x))
			{
				cout << "����������� ���������� � �� ��������������";
			}
			else if (a * a == b * b + c * c)
			{
				 cout << "����������� ���������� � �� �������������";
			}

			else cout << "����������� ����������";
		}
		else cout << "����������� c ������ ��������� �� ����������";
	}


}