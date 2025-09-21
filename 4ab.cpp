#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");

	int dw, dm;
	cout << "¬ведите число мес€ца" << endl;
	cin >> dm;
	cout << "¬ведите число недели" << endl;
	cin >> dw;
	if ((dm == 13 and dw == 2) or (dm == 13 and dw == 5) or (dm == 17 and dw == 5)) cout << "день неудачный";
}