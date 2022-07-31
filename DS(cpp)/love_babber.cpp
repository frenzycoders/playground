#include <iostream>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;
void find(int arr[], int n, int x);
int main()
{
    int arr[9] = {1, 3, 5, 5, 5, 5, 67, 123, 125};
    find(arr, 9, 5);

    return 0;
}

void find(int arr[], int n, int x)
{
    bool isFirst = false;
    map<string, int> m;
    vector<int> a;
    m.insert({"first", 0});
    m.insert({"second", 0});
    // code here
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            if (!isFirst)
            {
                m["first"] = i;
                isFirst = true;
            }

            m["second"] = i;
        }
    }

    a.push_back(m["first"]);
    a.push_back(m["second"]);

    cout << m["first"] << " " << m["second"];
}