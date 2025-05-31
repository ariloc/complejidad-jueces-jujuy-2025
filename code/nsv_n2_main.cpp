#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++) {
        int nsv = -1;
        for (int j = i-1; j >= 0 && nsv == -1; j--)
            if (arr[j] < arr[i])
                nsv = j;
        cout << nsv+1 << ' ';
    }

    return 0;
}
