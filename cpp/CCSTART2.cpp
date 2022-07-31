#include <iostream>
#include<list>
using namespace std;

int main() {
	// your code goes here
	
	int number;
	cin>>number;
	list<int> factors;
	int reduciable = 1;
	
	while(reduciable <= number){
	    if(number%reduciable == 0){
	        factors.push_back(reduciable);
	    }
	    reduciable++;
	}
	cout<<factors.size()<<endl;
    
    for(auto a : factors){
        cout<<a<<" ";
    }
    
	return 0;
}