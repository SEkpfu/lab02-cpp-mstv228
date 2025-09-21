#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");

	double x, y, z;
	cout << "Введите стороны возможного 3угольника" << endl;
	cin >> x >> y >> z;
	if (x <= 0 || y <= 0 || z <= 0) cout << "ошибка";
	else
	{
		if (x + y > z && x + z > y && y + z > x)
		{
			double a, b, c; // максимальное, среднее и наименьшее из сторон треугольника
			a = max(max(x, y), z);
			c = min(min(x, y), z);
			b = x + y + z - a - c;


			if (x == y && y == z) cout << "треугольник существует и он равносторонний";
			else if ((x == y && x != z) || (x == z && x != y) || (y == z and y != x))
			{
				cout << "Треугольник существует и он равнобедренный";
			}
			else if (a * a == b * b + c * c)
			{
				 cout << "треугольник существует и он прямоугольный";
			}

			else cout << "треугольник существует";
		}
		else cout << "треугольник c такими сторонами не существует";
	}


}