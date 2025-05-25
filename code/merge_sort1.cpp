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


