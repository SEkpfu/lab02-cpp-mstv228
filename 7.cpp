#include <iostream>
using namespace std;
int main() 
{
	setlocale(0, "");
	char x;
	cout << "введите арифметический знак" << endl;
	cin >> x;
	double a, b;
	cout << "¬ведите два вещественных числа" << endl;
	cin >> a >> b;
	switch (x) 
	{
		case '*': cout << a * b;
		case '+': cout << a + b;
		case '-': cout << a - b;
		default: cout << "ошибка";
	}
	


}