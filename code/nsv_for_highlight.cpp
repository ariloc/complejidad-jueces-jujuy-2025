?\xglobal\colorlet{FancyVerbHighlightColor}{Red!25!white}?for (int i = 1; i <= n; i++) {
    int j = i-1;
?\xglobal\colorlet{FancyVerbHighlightColor}{Blue!25!white}?    while (arr[j] >= arr[i])
?\xglobal\colorlet{FancyVerbHighlightColor}{Blue!25!white}?        j = ans[j];
?\xglobal\colorlet{FancyVerbHighlightColor}{Red!25!white}?    ans[i] = j;
    cout << j << ' ';
}
