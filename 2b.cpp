#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	int a;
	cin >> a;
	if (a % 2 == 0) cout << "число четное";
	else cout << "Число нечетное";

}