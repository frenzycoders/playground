#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <array>
#include <map>
using namespace std;

// int main() {
// 	// your code goes here
// 	int test,len;
//     cin>>test;
//     while(test != 0) {
// 		vector<vector<int>> adj;
//     	vector<int> v;
//         cin>>len;
//         adj.resize(len);

//         for(int i = 0; i<len; i++){
//             int x; cin>>x;
//             int N = i+x;
//             int P = i-x;
//             if(N<len){
//                 adj[N].push_back(i);
//             }
//             if(P>=0){
//                 adj[P].push_back(i);
//             }
//         }
//         v.resize(len,-1);
//         queue<int> Queue;
//         Queue.push(len-1);
//         v[len-1] = 0;
//         while(!Queue.empty()){
//             int u = Queue.front();
//             Queue.pop();
//             for(int a : adj[u]){
//                 if(v[a] == -1){
//                     Queue.push(a);
//                     v[a] = 1+v[u];
//                 }
//             }
//         }

//         for(int i = 0; i< len; i++){
//             cout<<v[i]<<"";
//         }
//         cout<<endl;
//         test--;
//     }
// 	return 0;
// }

int main()
{

    int len;
    int tmp[4];
    int count = 0;
    map<int, int> mp;
    cin >> len;
    int arr[len];

    for (int i = 0; i < len; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + len);

    for (int i = 0; i < len; i++)
    {
        for (int j = i+1; j < len; j++)
        {
            for (int k = j+1; k < len; k++)
            {
                for (int l = k+1; l < len; l++)
                {
                    tmp[0] = arr[i];
                    tmp[1] = arr[j];
                    tmp[2] = arr[k];
                    tmp[3] = arr[l];

                    int max = *max_element(arr, arr + len);
                    int min = *min_element(arr, arr + len);
                    if (max - min <= 5)
                    {
                        mp.insert({tmp[0] + tmp[1] + tmp[2] + tmp[3], 1});
                        count++;
                    }
                }
            }
        }
    }

    cout << count;
}
