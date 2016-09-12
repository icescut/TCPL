/**
 * 比较两个数值
 */
int numcmp(char *s1, char *s2){
    double v1, v2;
    v1 = atof(s1);
    v2 = atof(s2);
    // 不能直接返回相减之查，因为会四舍五入
    if(v1 < v2)
        return -1;
    else if (v1 > v2)
        return 1;
    else
        return 0;
}
