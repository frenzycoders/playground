#include <iostream>
#include <list>
using namespace std;
int main()
{

    int a, b, c;
    list<int> l;
    cin >> a;

    cin >> b;

    cin >> c;

    if (a > b && a < c || a < b && a > c)
    {
        cout << a;
    }
    else if (b > a && b < c || b < a and b > c)
    {
        cout << b;
    }
    else
    {
        cout << c;
    }
}