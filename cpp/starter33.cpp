#include <iostream>
using namespace std;
void getAllPairs(int arr[], int left, int right,int* count);
void finalLogic(int arr[], int left,int right,int mid,int* count);
int main() {
	// your code goes here
	int test,count=0;
	cin>>test;
	while(test != 0){
	    int size;
	    cin>>size;
	    int arr[size];
	    for(int i = 0; i<size; i++){
	        cin>>arr[i];
	    }
	    
	    getAllPairs(arr,0,size,&count);
	    
	    cout<<count<<endl;
	    
	    count=0;
	    
	    
	    test--;
	}
	return 0;
}

void getAllPairs(int arr[], int left, int right,int* count){

    if(left<right){
        int mid = (left+right)/2;
        getAllPairs(arr,left,mid,count);
        getAllPairs(arr,mid+1,right,count);
        finalLogic(arr,left,right,mid,count);
        
    }
}

void finalLogic(int arr[], int left,int right,int mid,int* count){
    int b[left+right+1],i=left,k=left,j=mid+1;
    while(i<=mid && j<=right){
        if(arr[i]>arr[j]){
            b[k]=arr[j];
            if(i<j && arr[i]*arr[j] > 0){
                cout<<"{ "<<i<<" , "<<j<<"}"<<endl;
                *count += 1;
            }
            k++;
            j++;
        }
        else{
            if(i<j && arr[i]*arr[j] > 0){
                cout<<"{ "<<i<<" , "<<j<<"}"<<endl;
                *count += 1;
            }
            b[k]=arr[i];
            i++;
            k++;
        }
    }
 
    while(i<=mid){
        b[k]=arr[i];
        i++;
        k++;
    }
    while(j<=right){
        b[k]=arr[j];
        j++;
        k++;
    }
 
    for(int x=left;x<=right;x++){
        arr[x]=b[x];
    }
}

