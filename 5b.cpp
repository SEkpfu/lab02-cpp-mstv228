#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");

	double a, b, x, y, z;
	double x1, y1; // ������� � ���������� �� ������ �������
	cout << "������� ������� ����������"<<endl;
	cin >> a >> b;
	cout << "������� ������� �������"<<endl;
	cin >> x >> y >> z;
	x1 = x + y + z - max(x, max(y, z)) - min(x, min(y, z)); // �������
	y1 = x + y + z - x1 - max(x, max(y, z)); // ����������
	if ((a >= x1 && b >= y1) || (b >= x1 && a >= y1)) cout << "������";
	else cout << "�� ������";

	

}