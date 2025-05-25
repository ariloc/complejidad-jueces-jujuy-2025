int aidx = 0, bidx = 0, idx = l;
while (aidx < asz && bidx < bsz)
    if (a[aidx] <= b[bidx]) arr[idx++] = a[aidx++];
    else arr[idx++] = b[bidx++];
