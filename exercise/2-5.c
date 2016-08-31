	/**
 * 题目: 编写any(s1, s2)，将字符串s2中任何字符在字符串s1中第一次出现的位置返回
 */
int any(char s1[], char s2[]){
    int i, j, k;
    for(i = k = 0; s1[i] != '\0'; i++){
        for(j = 0; s2[j] != '\0'; j++)
            if(s2[j] == s1[i])
                return i;
    }
    return -1;
}
