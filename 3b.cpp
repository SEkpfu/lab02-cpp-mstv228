#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");

	double x;
	cin >> x;
	if (x * x + 4 * x - 5==0) cout << "ошибка";
	else
	{
		if (x <= -2) cout << 0;
		else
		{
			(x <= 0) ? cout << x * x + 4 * x + 5 : cout << 1 / (x * x + 4 * x - 5);

		}

	}

}