#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");

	double a, b, x, y, z;
	double x1, y1; // среднее и наименьшее из сторон кирпича
	cout << "Введите стороны отверствия"<<endl;
	cin >> a >> b;
	cout << "Введите стороны кирпича"<<endl;
	cin >> x >> y >> z;
	x1 = x + y + z - max(x, max(y, z)) - min(x, min(y, z)); // среднее
	y1 = x + y + z - x1 - max(x, max(y, z)); // наименьшее
	if ((a >= x1 && b >= y1) || (b >= x1 && a >= y1)) cout << "входит";
	else cout << "Не входит";

	

}