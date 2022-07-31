#include <iostream>
using namespace std;

int findGCD(int numA,int numB);
int findLCM(int a,int b);

int main() {
	// your code goes here
	int test,numA,numB,a = 0,b = 0,gcd,sum = 0;
	cin>>test;
	while(test !=0){
        cin>>numA>>numB;
        
	    for(int i = 1; i<numA; i++){
            cout<<"Here";
	        for(int j = 1; i<numB; j++){
	            gcd = findGCD(i,j);
	            
	            if(gcd > 1){
	                if(sum == 0){
	                    sum = i+j;
	                }else if((i+j) < sum){
	                    sum = i+j;
	                    a = i; 
	                    b = j;
	                }
	            }
	        }
	    }
	    
	    if(a > 0 && b>0){
	        cout<<a<<" "<<b<<endl;
	    }else{
	        cout<<"-1"<<endl;
	    }
	    
	    
	    
	    
	    
	    test--;
	}
	
	
	
	return 0;
}


int findGCD(int numA,int numB){
    int lcm = findLCM(numA,numB);
    return (numA*numB)/lcm;
}


int findLCM(int a,int b){
    int max = (a>b)? a : b;
    while(true){
        if(max%a == 0 && max%b == 0){
            break;
        }
        ++max;
    }
    
    return max;
}