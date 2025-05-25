#include <random>
#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int> &arr, int l, int mid, int r) {
    int asz = mid-l, bsz = r-mid;
    vector<int> a(asz), b(bsz);
    for (int i = 0; i < asz; i++)
        a[i] = arr[l+i];
    for (int i = 0; i < bsz; i++)
        b[i] = arr[mid+i];

    int aidx = 0, bidx = 0, idx = l;
    while (aidx < asz && bidx < bsz)
        if (a[aidx] <= b[bidx]) {
            arr[idx] = a[aidx];
            idx++, aidx++;
        }
        else {
            arr[idx] = b[bidx];
            idx++, bidx++;
        }

    while (aidx < asz) {
        arr[idx] = a[aidx];
        idx++, aidx++;
    }
    while (bidx < bsz) {
        arr[idx] = b[bidx];
        idx++, bidx++;
    }
}


void split(vector<int> &arr, int l, int r) {
    if (r-l <= 1)
        return;

    int mid = (r+l)/2;
    split(arr,l,mid);
    split(arr,mid,r);
    merge(arr,l,mid,r);
}

void sort(vector<int> &arr, int n) { 
    split(arr,0,n); 
}

int main(int argc, char *argv[]) {
    bool demo = 0;
    if (argc > 1 && argv[1][0] == '1')
        demo = 1;

    int n = demo ? 10 : 1e5;
    vector<int> arr(n);

    //std::random_device dev;}
    int seed = 12345;
    mt19937 rng(12345);
    uniform_int_distribution<std::mt19937::result_type> dist(1,n*1000);

    for (int i=0; i<n; i++)
        arr[i] = dist(rng);

    sort(arr,n);

    if (demo) {
        for (int i = 0; i < n; i++)
            cout << arr[i] << ' ';
        cout << '\n';
    }

    return 0;
}
