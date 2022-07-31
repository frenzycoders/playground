#include<iostream>
#include<string>
#include<map>
using namespace std;


class Solution {
public:
    bool isValid(string s) {
        map<string,int> M;
        
        for(auto a : s){
            M[a+"a"] += 1;
        }
        if(M["(a"] == M[")a"] && M["{a"] == M["}a"] && M["[a"] == M["]a"]){
            cout<<"Here";
            return true;
        }
        return false;
    }
};


int main(){
    Solution solution;
    cout<<solution.isValid("(}");
}