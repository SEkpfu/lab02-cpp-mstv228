#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int a, b, c;
	cout << "¬ведите 3 целых числа"<<endl;
	cin >> a >> b >> c;

	
	//a
	int summ = 0;
	if (a > 10) summ += a;
	if (b > 10) summ += b;
	if (c > 10) summ += c;
	cout <<"—умма чисел больших 10 равна " << summ << endl;

	//b
	int k = 0; // счетчик кол-ва четных чисел
	if (a % 2 == 0) k += 1;
	if (b % 2 == 0) k += 1;
	if (c % 2 == 0) k += 1;
	cout <<"количество четных чисел равно " << k<<endl;

	//c
	cout << "—реднее из данных чисел равно " << a + b + c - max(max(a, b), c) - min(min(a, b), c) << endl;

	//d
	int minn = min(min(a,b),c);
	cout << "номер(a) наименьшего из этих чисел ";
	if (minn == a)cout << "1 ";
	if (minn == b)cout << "2 ";
	if (minn == c)cout << "3 ";
	// если все числа равны то выведет все 3 номера 

}
