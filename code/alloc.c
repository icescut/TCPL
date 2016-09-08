/**
 * 通过一个字符数组，实现分配及释放内存空间的功能
 */
#define ALLOCSIZE 10000

static char allocbuf[ALLOCSIZE];
static char *allocp;

char *alloc(int n){
    if(allocbuf + ALLOCSIZE - allocp >= n){
        allocp += n;
        return allocp - n;
    } else
        return 0;
}

void afree(char *p){
    if(p>= allocbuf && p < allocbuf + ALLOCSIZE)
        allocp = p;
}
