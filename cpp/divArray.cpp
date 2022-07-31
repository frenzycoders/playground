#include <vector>
#include <iostream>
#include <map>
using namespace std;

class Solution
{
public:
    bool divideArray(vector<int> &nums)
    {
        map<int, int> maps;
        int count = 0;
        bool output = false;
        for (auto a : nums)
        {
            count = 0;
            if (maps[a] != 1)
            {
                for (int i = 0; i < nums.size(); i++)
                {
                    if (a == nums[i])
                    {
                        count++;
                    }
                }
                maps.insert({a, 1});
                if (count % 2 == 0)
                {
                    continue;
                }
                else
                {
                    return false;
                }
            }
        }

        return true;
    }
};

int main()
{
    // Solution sol;
    // vector<int> nums = {18,19,5,5,18,19,5,6,12,19,13,4,16,11,4,16,10,8,12,8,2,1,8,17,4,18,3,5,16,2,16,12,17,16,7,16,2,17,19,9,1,20,17,17,4,6};
    // cout<<sol.divideArray(nums);
    char l[] = {'w', 'e', 'l'};
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i % 2 != 0 && j > 0 && j < 4)
            {
                cout << l[j-1]
                     << " ";
            }
            else
                cout << "*"
                     << " ";
        }
        cout << endl;
    }
}