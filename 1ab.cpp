#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    double a1, b1, a2, b2;
    cout << "������� ������� 1-�� �������������� \n";
    cout << "a1= ";  cin >> a1;
    cout << "b1= ";  cin >> b1;
    cout << "������� ������� 2-�� �������������� \n";
    cout << "a2= ";  cin >> a2;
    cout << "b2= ";  cin >> b2;

    double s1, s2;
    s1 = a1 * b1;
    s2 = a2 * b2;

    if (s1 > s2)
        cout << "max ������� � �������,  S= " << s1;
    if (s1 == s2) cout << "������� �����";
    else
        cout << "max ������� � �������,  S= " << s2;

    return 0;
}