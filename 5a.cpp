#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");

	double a, b, c, r, h;
	cout << "������� �����, ������, ������ �������" << endl;
	cin >> a >> b >> c;
	cout << "������� ������ � ������ �����"<<endl;
	cin >> r >> h;
	if (2 * r < a && 2 * r < b && h < c) cout << "���� ����������";
	else cout << "���� �� ����������";


}