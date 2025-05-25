for (int i = 1; i <= n; i++) {
    int j = i-1;
    while (arr[j] >= arr[i])
        j = ans[j];
    ans[i] = j;
    cout << j << ' ';
}
