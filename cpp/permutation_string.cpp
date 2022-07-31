#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

class Solution
{

    map<char, int> M;

public:
    bool checkInclusion(string s1, string s2)
    {
        int len = s1.length() - 1;
        int loop_target = s2.length();

        for (auto a : s1)
        {
            if (this->M[a] == 0)
            {
                this->M.insert({a, 2});
            }
            else
            {
                this->M[a] += 1;
            }
        }


        bool isValid = false;
        int count = 0;
        int i = 0;

        while (i < loop_target)
        {
            if (count == len)
            {
                isValid = true;
                break;
            }

            if (this->M[s2[i]] != 0)
            {
                count++;
            }
            else
            {

                count = 0;
                isValid = false;
            }

            i++;
        }
        this->M = {};
        return isValid;
    }
};

int main()
{
    Solution sol;

    cout << sol.checkInclusion("hello", "ooolleoooleh");
}