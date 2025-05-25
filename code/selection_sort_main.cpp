#include <random>
#include <iostream>
#include <vector>

using namespace std;

void sort(vector<int> &arr, int n) {
    for (int i = 0; i < n; i++)
        for (int j = i+1; j < n; j++)
            if (arr[j] < arr[i])
                swap(arr[i],arr[j]); // Intercambia los números
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

