#include <iostream>
#include <cmath>
using namespace std;
int main()
{	
	setlocale(0, "");

	double x, y;
	cout << "¬ведите координаты точки" << endl;
	cin >> x >> y;
	
	if (x * x + y * y <= 4) cout << "10 очков";
	else if (x * x + y * y <= 16) cout << "5 очков";
	else cout << "0 очков";



}