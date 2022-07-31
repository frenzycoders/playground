#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,b;
    cin>>t;
	while(t!=0){
	    cin>>a>>b;
    	if(a == b || a>b){
    	    cout<<"YES";
    	}else{
    	    cout<<"NO";
    	}
    	t--;
	}
	
	return 0;
}
