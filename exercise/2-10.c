/**
 * 题目: 改写lower函数，使用条件表达式代替if-else
 */
int lower(int c){
    return (c >= 'A' && c <= 'Z') ? (c - 'A' + 'a') : c;
}
