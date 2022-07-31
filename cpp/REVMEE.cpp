#include <iostream>
#include<list>
using namespace std;

int main() {
	// your code goes here
	int n;
    cin>>n;
	list<int> l;
	int tmp = 0;
	for(int i = 0; i<n; i++){
	    cin>>tmp;
	    l.push_front(tmp);
	}
	
	for(auto a: l){
	    cout<<a<<" ";
	}
	
	return 0;
}
