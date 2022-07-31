#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int number;
	
	cin>>number;
	int ans = 0;
	while(number != 0){
	    ans += number;
	    number--;
	}
	
	cout<<ans;
	
	return 0;
}
