using namespace std;
#include <iostream>
int main()
{
	setlocale(0, "");
	double x, y;
	cout << "введите координаты точки"<<endl;
	cin >> x >> y;
	//a
	if (x > -2 && x < 0 && y < 1 && y>0) cout << "принадлежит в a";

	//b
	if (x * x + y * x < 25 && y>0) cout << "принадлежит в b";

	//c
	if (x * x + y * y > 9 && x * x + y * y < 36 and x>0) cout << "принадлежит в c";

	//d
	if (y < -2 * x + 2 && x>0 && y > 0) cout << "принадлежит в d";


}