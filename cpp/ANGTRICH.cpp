#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int x,y,z;
    int a[3];
    cin>>a[0]>>a[1]>>a[2];
    sort(a,a+3);
    x=a[0];y=a[1];z=a[2];
    if(x+y>z){
      if(x==y && y==z){
      cout<<1;
      }
      else if(x==y || y==z || x==z){
        cout<<2;
      }
      else{
        cout<<3;
      }
    }
    else{cout<<-1;}
	return 0;
}
