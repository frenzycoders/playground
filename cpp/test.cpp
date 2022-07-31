#include <iostream>
#include <map>
#include <list>
#include <string>
#include <algorithm>

using namespace std;
string getSubStringBetweenRange(int indexA, int indexB, string str);
bool isPelindrome(string str);

int main()
{

    string s = "civilwartestingwhetherthatnaptionoranynartionsoconceivedandsodedicatedcanlongendureWeareqmetonagreatbattlefiemldoftzhatwarWehavecometodedicpateaportionofthatfieldasafinalrestingplaceforthosewhoheregavetheirlivesthatthatnationmightliveItisaltogetherfangandproperthatweshoulddothisButinalargersensewecannotdedicatewecannotconsecratewecannothallowthisgroundThebravelmenlivinganddeadwhostruggledherehaveconsecrateditfaraboveourpoorponwertoaddordetractTgheworldadswfilllittlenotlenorlongrememberwhatwesayherebutitcanneverforgetwhattheydidhereItisforusthelivingrathertobededicatedheretotheulnfinishedworkwhichtheywhofoughtherehavethusfarsonoblyadvancedItisratherforustobeherededicatedtothegreattdafskremainingbeforeusthatfromthesehonoreddeadwetakeincreaseddevotiontothatcauseforwhichtheygavethelastpfullmeasureofdevotionthatweherehighlyresolvethatthesedeadshallnothavediedinvainthatthisnationunsderGodshallhaveanewbirthoffreedomandthatgovernmentofthepeoplebythepeopleforthepeopleshallnotperishfromtheearth";

    list<int> pString;
    map<int, string> vals;
    if (s.length() == 1)
    {
        cout << s;
    }
    else
    {   
        for (int i = 0; i < s.length(); i++)
        { 
            for (int j = 0; j < s.length(); j++)
            {
                string str = getSubStringBetweenRange(i, j, s);
                if (isPelindrome(str))
                {
                    pString.push_back(str.length());
                    vals[str.length()] = str;
                }
            }
        }
        int element = *max_element(pString.begin(), pString.end());
        cout << vals[element];
    }

    return 0;
}

string getSubStringBetweenRange(int indexA, int indexB, string str)
{   
    return str.substr(indexA,indexB);
    // cout<<" { "<<indexA<<" -> "<<indexB<<" } \n";
    // return "N/A";
}

bool isPelindrome(string str)
{
    string old = str;
    reverse(str.begin(), str.end());

    if (old == str)
    {
        return true;
    }
    else
    {
        return false;
    }
}