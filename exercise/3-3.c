/**
 * 题目: 例如把a-z，扩张为完整列表abc..xyz
 */
void expand(char s1[], char s2[]){
    char c;
    int i, j;
    i =j = 0;
    while((c = s1[i++]) != '\0'){
        if(s1[i] == '-' && s[i+1] > c){
            i++;
            while(c < s[i])
                s2[j++] = c++;
        } else
            s2[j++] = c;
    }
    s2[j] = '\0';
}
