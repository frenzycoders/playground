#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    long long int test, x;
    cin >> test;
    bool isFound = false;
    while (test != 0)
    {
        cin >> x;

        for (int i = 0; i <= x; i++)
        {
            if (isFound)
                break;
            for (int j = 0; j <= x; j++)
            {
                if (isFound)
                    break;
                for (int k = 0; k <= x; k++)
                {

                    if (((i ^ j) + (j ^ k) + (k ^ i)) == x)
                    {
                        if (i < j && j < k && k > i)
                        {
                            cout << (i ^ j) << " , " << (j ^ k) << " , " << (k ^ i) << endl;
                            isFound = true;
                            cout << "{ " << i << " , " << j << " , " << k << " }";
                            break;
                        }
                    }
                }
            }
        }

        if(isFound == false){
            cout<<-1<<endl;
        }

        test--;
    }

    return 0;
}
