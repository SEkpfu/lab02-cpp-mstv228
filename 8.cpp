#include <iostream>
#include <cmath>
using namespace std;
int main()
{	
	setlocale(0, "");

	double x, y;
	cout << "������� ���������� �����" << endl;
	cin >> x >> y;
	
	if (x * x + y * y <= 4) cout << "10 �����";
	else if (x * x + y * y <= 16) cout << "5 �����";
	else cout << "0 �����";



}