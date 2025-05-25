int asz = mid-l, bsz = r-mid;
vector<int> a(asz), b(bsz);
for (int i = 0; i < asz; i++)
    a[i] = arr[l+i];
for (int i = 0; i < bsz; i++)
    b[i] = arr[mid+i];
