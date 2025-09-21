#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");

	double a, b, c, r, h;
	cout << "Введите длину, ширину, высоту коробки" << endl;
	cin >> a >> b >> c;
	cout << "Введите радиус и высоту торта"<<endl;
	cin >> r >> h;
	if (2 * r < a && 2 * r < b && h < c) cout << "торт поместится";
	else cout << "Торт не поместится";


}