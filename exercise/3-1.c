	/**
 * 题目: 改写binsearch，使while内只进行一次判断
 */
int binsearch(int x, int v[], int n){
    int low, mid, high;
    low = 0;
    high = n - 1;
    while(low <= high && x != v[mid]){
        mid = (low + high) / 2;
        if(x < v[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    if(x == v[mid])
        return mid;
    return -1;
}
