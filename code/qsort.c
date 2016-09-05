void qsort(int v[], interface left, int right){
    int i, last;
    if(left >= right)
        return;
    swap(v, left, (left+ right) / 2);
    last = left;
    for(i = left + 1; i <= right; i++)
        if(v[i] < v[left])
            swap(v, ++last, i);
    swap(v, left, last);
    qsort(v, left, last - 1);
    qsort(v, last + 1, right);
}
