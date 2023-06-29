#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, M, K;
        cin >> N >> M >> K;
        int A[N];
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        bool count = false;
        for (int i = 0; i < N; i++) {
            int D = (M + 1) - A[i];
            if (D >= K) {
                count = true;
                continue;
            } else {
                count = false;
                cout << "NO" << endl;
                break;
            }
        }
        if (count) {
            cout << "YES" << endl;
        }
    }

    return 0;
}
