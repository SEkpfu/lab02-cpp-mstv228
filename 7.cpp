#include <iostream>
using namespace std;
int main() 
{
	setlocale(0, "");
	char x;
	cout << "������� �������������� ����" << endl;
	cin >> x;
	double a, b;
	cout << "������� ��� ������������ �����" << endl;
	cin >> a >> b;
	switch (x) 
	{
		case '*': cout << a * b;
		case '+': cout << a + b;
		case '-': cout << a - b;
		default: cout << "������";
	}
	


}