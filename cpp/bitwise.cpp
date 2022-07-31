#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test, colorLen, B=1;
	cin>>test;
    int a = 1^5;
    cout<<a;
	while(test != 0){
	   
	   cin>>colorLen;
	   
	   for(int i = 2; i<= colorLen; i++){
	       if(i%2 == 0){
	           B = B ^ i;
	       }else{
	           B = B & i;
	       }
	   }
	   
	   cout<<B<<endl;
	    test--;
	}
	
	return 0;
}
