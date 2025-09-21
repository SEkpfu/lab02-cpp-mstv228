#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");

	double x;
	cin >> x;
	if (x <= -2) cout << 0;
	else
	{
		if (x <= 10) cout << x * x + 4 * x + 5;
		else cout << 1 / (x * x + 4 * x - 5);
	}
	


}