#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int test,rent,price,res;
	cin>>test;
	while(test!=0){
	    
	    cin>>rent>>price;
	    res = price%rent;
	    if(res > 0){
	         cout<<price/rent<<endl;
        }else{
           cout<<0;
	    }
	    
	    
	    test--;
	}
	
	
	return 0;
}
