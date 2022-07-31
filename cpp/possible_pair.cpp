#include <iostream>
using namespace std;
int gcd(int a,int b);
int main() {
	// your code goes here
	int test,a,b,valA,valB;
	cin>>test;
    int v = 1^5;
    cout<<v;
	while(test != 0){
	   
	   cin>>a>>b;
	   
	   for(int i = 0; i<b; i++){
	       for(int j = i+1; j<= b; j++){
	           if(gcd(i,j) > 1){
	               valA = i;
	               valB = j;
	           }
	       }
	   }
	   
	   cout<<valA<<" "<<valB<<endl;
	   
	    test--;
	}
	return 0;
}


int gcd(int a,int b){
    int hcf = 0;
    
    for(int i = 2; i<=b; i++){
        if(a%i == 0 && b%i == 0){
            hcf = i;
            break;
        }
    }
    
    return hcf;
}