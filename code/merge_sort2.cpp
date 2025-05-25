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
