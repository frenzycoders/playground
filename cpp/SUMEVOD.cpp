#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int num, sumEven, sumOdd;
    cin >> num;
    if (num == 1)
    {
        cout << "1"
             << " "
             << "2";
        return 0;
    }
    sumOdd = (num / 2) * ((2 + (num - 1) * 2));
    sumEven = (num / 2) * ((4 + (num - 1) * 2));
    cout << sumOdd << " " << sumEven;
    return 0;
}
