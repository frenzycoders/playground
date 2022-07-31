#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int numLen,target;
    bool isExist = false;
    
    cin>>numLen;
    cin>>target;
    int tmp =0;
    for(int i = 0; i<numLen; i++){
        cin>>tmp;
        
        if(tmp == target){
            isExist = true;
        }
    }
    
    cout<<isExist;
    
	return 0;
}