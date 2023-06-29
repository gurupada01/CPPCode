#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, m;
        cin >> n >> m;
        int arr[m];
        int sum = 0;
        
        for (int i = 0; i < m; i++) 
        {
            cin >> arr[i];
        }

        int arr1[n];
        for (int i = 0; i < n; i++) 
        {
            arr1[i] = i + 1;
        }
        
        for (int i = 1; i <= n; i++) 
        {
            for (int j=0; j < m; j++) 
            {
                if (arr1[i]==arr[j])
                {
                    sum += arr1[i];
                    break;
                }
            }
        }
        
        cout << sum << endl;
    }

    return 0;
}

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main() {
//     int T;
//     cin >> T;

//     while (T--) {
//         int N, M;
//         cin >> N >> M;
//         vector<int> Q(M);
//         for (int i = 0; i < M; i++) {
//             cin >> Q[i];
//         }

//         vector<int> S;
//         for (int i = 1; i <= N; i++) {
//             if (find(Q.begin(), Q.end(), i) == Q.end()) {
//                 S.push_back(i);
//             }
//         }

//         int maxCost = 0;
//         for (int num : S) {
//             maxCost += num;
//         }

//         cout << maxCost << endl;
//     }

//     return 0;
// }
