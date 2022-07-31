// #include <iostream>
// #include<map>
// #include<numeric>
// #include<algorithm>

// using namespace std;

// int main()
// {
//     // your code goes here

//     int test, arrLen, quesries;

//     cin >> test;
//     while (test != 0)
//     {

//         cin >> arrLen;

//         int ar[arrLen];

//         for (int i = 0; i < arrLen; i++)
//         {
//             cin >> ar[i];
//         }

//         map<int,int> M;

//         cin >> quesries;
//         int possiblequeries[quesries];
        
//         int a, b;

//         for (int i = 0; i < quesries; i++)
//         {   possiblequeries[i] =0;
//             cin >> a >> b;
//             M.insert({a, b});
//         }

//         for (int i = 0; i < arrLen; i++)
//         {
//             for (int j = 0; j < arrLen; j++)
//             {   
                
//                 int q = 0;
//                 int sum = 0;
//                 for (auto a : M)
//                 {   
//                     if (__gcd(ar[i] * a.first, ar[j] * a.second) == 1)
//                     {
//                         possiblequeries[q] += 1;
//                     }
//                     q += 1;
//                 }
//             }
//         }

//         for(int i = 0; i<quesries; i++){
//             cout<<possiblequeries[i]<<endl;
//         }

//         test--;
//     }

//     return 0;
// }


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test,arrLen,count = 0;
	
	cin>>test;

	while(test != 0){
		cin>>arrLen;
		int arr[arrLen];
		for(int i = 0; i<arrLen; i++)
			cin>>arr[i];

		cout<<(arrLen-1)*2;

		test--;
	}
	return 0;
}